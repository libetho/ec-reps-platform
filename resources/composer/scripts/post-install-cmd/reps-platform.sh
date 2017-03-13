#!/bin/sh

JSON="lib/composer.json"
MAKE="resources/site.make"
TYPE="reps"
VERSION="~1.0"

# Expand lib folder with reps-platform.
if [ ! -e $JSON ] ; then
  composer init --working-dir="lib"
  composer require "ec-europa/ec-$TYPE-platform:$VERSION" --working-dir="lib"
elif grep -q "ec-europa/ec-$TYPE-platform" $JSON ; then
  composer install --working-dir="lib"
else
  composer require "ec-europa/ec-$TYPE-platform:$VERSION" --working-dir="lib"
fi

# If the package is present update the lib source code.
if [ -d "lib/vendor/ec-europa/ec-$TYPE-platform" ] ; then

  # Remove $TYPE related sources if any.
  rm -rf lib/*/$TYPE

  # Create clean folders.
  mkdir -p lib/features/$TYPE
  mkdir -p lib/themes/$TYPE
  mkdir -p lib/modules/$TYPE

  # Copy the sources in place.
  cp -r lib/vendor/ec-europa/ec-$TYPE-platform/lib/features/* lib/features/$TYPE
  cp -r lib/vendor/ec-europa/ec-$TYPE-platform/lib/modules/* lib/modules/$TYPE
  cp -r lib/vendor/ec-europa/ec-$TYPE-platform/lib/themes/* lib/themes/$TYPE
  cp -f lib/vendor/ec-europa/ec-$TYPE-platform/resources/$TYPE-platform.make resources/$TYPE-platform.make


  # Include the $TYPE-platform.make file.
  if ! [ -e $MAKE ] 2> /dev/null && [ -e $MAKE".example" ] ; then
    mv $MAKE".example" $MAKE;
  elif [ -e $MAKE ] ; then
    COMMENT="\n\n; ============="
    COMMENT="$COMMENT\n; ${TYPE^} platform"
    COMMENT="$COMMENT\n; =============\n"
    INCLUDE='includes[] = "$TYPE-platform.make"'
    grep -q "$INCLUDE" "$MAKE" || echo "$COMMENT$INCLUDE" >> "$MAKE"
  else
    echo "No site.make file found, $TYPE-platform.make not included!"
  fi
fi
