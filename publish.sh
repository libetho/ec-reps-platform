#!/bin/bash

git subsplit publish \
    lib/features/reps_core:git@github.com:verbruggenalex/reps_core.git \
    --heads=release/4.x --update
