#!/bin/bash

git subsplit publish "
    lib/features/reps_contact_form:git@github.com:verbruggenalex/reps_contact_form.git
    lib/features/reps_core:git@github.com:verbruggenalex/reps_core.git
    lib/features/reps_events:git@github.com:verbruggenalex/reps_events.git
    lib/features/reps_migrate:git@github.com:verbruggenalex/reps_migrate.git
    lib/features/reps_myths:git@github.com:verbruggenalex/reps_myths.git
    lib/features/reps_news:git@github.com:verbruggenalex/reps_news.git
    lib/features/reps_publications:git@github.com:verbruggenalex/reps_publications.git
    lib/features/reps_videos:git@github.com:verbruggenalex/reps_videos.git
    lib/modules/custom/mapeditor:git@github.com:verbruggenalex/mapeditor.git
    lib/modules/custom/mbp_sync:git@github.com:verbruggenalex/mbp_sync.git
    lib/modules/nexteuropa/nexteuropa_migrate:git@github.com:verbruggenalex/nexteuropa_migrate.git
    lib/themes/reps:git@github.com:verbruggenalex/reps.git
  " --heads=release/4.x --update
