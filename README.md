## REPS Platform Instructions

To incorporate the REPS platform into your subsite project you need to add
the following to your resources/composer.json file:

```json
{
    "require": {
        "ec-europa/ec-reps-platform": "~3.0"
    },
    "scripts": {
        "post-install-cmd": "vendor/ec-europa/ec-reps-platform/resources/install-reps-platform.sh",
        "post-update-cmd": "vendor/ec-europa/ec-reps-platform/resources/install-reps-platform.sh"
    }
}
```
