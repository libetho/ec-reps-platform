#!/bin/bash

# If the package is present update the lib source code.
if [ -d "vendor/ec-europa/ec-reps-platform" ] ; then

  # Remove reps related sources if any.
  rm -rf modules/custom/reps
  rm -rf modules/features/reps
  rm -rf themes/reps

  # Create clean folders
  mkdir -p modules/features/reps
  mkdir -p modules/custom/reps
  mkdir -p themes/reps

  # Copy the sources in place.
  cp -r vendor/ec-europa/ec-reps-platform/lib/features/* modules/features/reps
  cp -r vendor/ec-europa/ec-reps-platform/lib/modules/* modules/custom/reps
  cp -r vendor/ec-europa/ec-reps-platform/lib/themes/* themes/reps
  cp -f vendor/ec-europa/ec-reps-platform/resources/reps-platform.make reps-platform.make

  # Include the reps-platform.make file.
  if ! [ -e site.make ] 2> /dev/null && [ -e site.make".example" ] ; then
    mv site.make".example" site.make;
  fi
  if [ -e site.make ] ; then
    COMMENT="\n\n; ================="
    COMMENT="$COMMENT\n; Platform for reps"
    COMMENT="$COMMENT\n; =================\n"
    INCLUDE='includes[] = "'reps'-platform.make"'
    grep -qF "$INCLUDE" "site.make" || echo -e "$COMMENT$INCLUDE" >> "site.make"
  else
    echo "No site.make file found, reps-platform.make not included!"
  fi
fi

