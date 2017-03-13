How to run automated tests
==========================

NextEuropa Migrate migration classes are tested using PHPUnit. 
To run the tests perform the following operations:
 
  - Install Multisite using Drupal Standard profile.
  - From within ```nexteuropa_migrate``` root directory run ```composer install```
  - Copy ```phpunit.xml.dist``` into ```phpunit.xml``` and set ```DRUPAL_ROOT```
    value to your Drupal installation abzolute root path.
  - Enable ```nexteuropa_migrate_test``` feature.
  - Run ```./vendor/bin/phpunit```
