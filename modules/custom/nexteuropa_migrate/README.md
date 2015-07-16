NextEuropa Migrate
==================

This module extends Migrate functionalities allowing to import multi-language 
content from standard Integration Layer JSON format.

Destination entities have to be translatable using Entity Translation module
in order for the migration to work correctly.

Integration Layer JSON format
=============================

Each content item is defined by a JSON document having the following features:
 
Metadata
--------
Each JSON document is required to have the following matadata proprieties:

```
{
  "_id": "b849bh0qh0qnciwpvi3tn342kc39c24b",    # Unique document ID.
  "type": "article",                            # Content type.
  "default_language": "en",                     # Default content language.    
  "languages": ["fr", "en"],                    # Languages the content is available in.
```

Content fields
--------------
Content fields are exposed in the format below:
 
```
  "fields": {
    "title": {
      "en": ["English title article 1"],
      "fr": ["French title article 1"]
    },
    "abstract": {
      "en": ["English abstract article 1"],
      "fr": ["French abstract article 1"]
    }
```

 - Each "fields" propriety represent a content field.
 - "fields" propriety keys are the actual field names.
 - "fields" propriety values are objects having as propriety keys valid 
   ISO 639-1 format language codes, plus "und" for language neutral content 
   (e.g. in case of fields referencing other documents).
 - Language code-keyed proprieties have, as value, an array holding the actual
   field content, expressed in the respective language. Values must always be
   arrays, regardless if the field has only one or several values.

Using migration classes with Migrate
====================================

In order to implement your own migration using Migrate refer to: 
[Getting started with Migrate](https://www.drupal.org/node/1006982).

In order to be able to import Integration Layer JSON documents make sure that
your migration classes extend ```Drupal\nexteuropa_migrate\migrate\MigrationAbstract```
instead the default ```Migration``` class, provided by the Migrate module.

Also use ```Drupal\nexteuropa_migrate\migrate\MigrateItemJSON``` instead of
default ```MigrateItemJSON```, provided by Migrate module.

Below an example about how to setup migration source using "NextEuropa Migrate"
classes:

```
<?php

use Drupal\nexteuropa_migrate\migrate\MigrateItemJSON;
use Drupal\nexteuropa_migrate\migrate\MigrationAbstract;

class NextEuropaMigration extends MigrationAbstract {

  public function __construct($arguments) {
    // Ordinary Migrate code here...

    $this->setSource(new MigrateSourceList(
      new \MigrateListJSON('http://example.com/list.json'),
      new MigrateItemJSON('http://example.com/document-:id.json', array()),
      array()
    ));
  }

}
```

Field mapping
-------------
Field mapping works exactly as in a standard Migrate migration. The only
requirement we must meet is to always provide the following field mappings:

```
    // Entity translation requires that both title fields are mapped.
    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('title_field', 'title');

    // Mapping default language is necessary for correct translation handling.
    $this->addFieldMapping('language', 'default_language');
```

For more in-depth examples on how to setup your migration with NextEuropa Migrate
please refer to ```nexteuropa_migrate_test``` migration classes:

- ./tests/nexteuropa_migrate_test/includes/nexteuropa_migrate_test.abstract.inc
- ./tests/nexteuropa_migrate_test/includes/nexteuropa_migrate_test.articles.inc
- ./tests/nexteuropa_migrate_test/includes/nexteuropa_migrate_test.categories.inc
- ./tests/nexteuropa_migrate_test/includes/nexteuropa_migrate_test.news.inc
