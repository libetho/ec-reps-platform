#!/usr/bin/env bash

# Remove reps related sources if any.
rm -rf lib/features/reps
rm -rf lib/themes

# Create clean folders
mkdir -p lib/features/reps
mkdir -p lib/themes
mkdir -p lib/modules

# Copy the sources in place.
cp -r vendor/ec-europa/reps-platform/lib/features/* lib/features/reps
cp -r vendor/ec-europa/reps-platform/lib/modules/* lib/modules
cp -r vendor/ec-europa/reps-platform/lib/themes/* lib/themes
cp -r vendor/ec-europa/reps-platform/reps-platform.make resources/reps-platform.make

echo REPS Sources copied...
echo Make sure that you add:
echo =================================
echo includes[] = "reps-platform.make"
echo =================================
echo to your site.make file.