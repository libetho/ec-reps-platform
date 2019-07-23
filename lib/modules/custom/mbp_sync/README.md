# MBP sync
This module completes some of the gaps in the drupal file management.
Two new drush commands are exposed, mbpt and mbpf which will:
- Parse the file entities and assign the term folders. 
  This will call the batch api so it may take a while.
- Parses entities for hard coded links and replaces them with file url tokens. 
  This will call the batch api so it may take a while.
