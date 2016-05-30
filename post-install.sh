#!/usr/bin/env bash

# Remove reps related sources if any.
rm -rf lib/features/reps
rm -rf lib/themes/reps

# Create clean folders
mkdir lib/features/reps
mkdir lib/themes/reps

# Copy the sources in place.
cp -r vendor/ec-europa/reps-platform/modules/features/* lib/features/reps
cp -r vendor/ec-europa/reps-platform/themes/* lib/themes/reps

echo REPS Sources copied, make sure that you update your site.make for libraries and contribs