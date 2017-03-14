## REPS Platform Instructions

To incorporate the REPS platform into your subsite project you need to
copy the file `resources/composer/scripts/post-install-cmd/install-reps-platform`
to the same location into your subsite project. Make sure that this
file is executable.

This script will:
- install the reps platform source code into your projects `lib/` directory.
- it will add an include line into your site.make for its contributed modules.
- it will add a .gitignore file to your lib folder to exclude its source code.

The script has the version set to ~1.0 which will allow for your project to
automatically update minor versions. If you wish to control the exact version
yourself you need to change the version in the script to the one you want.

