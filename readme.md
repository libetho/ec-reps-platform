## REPS Platform Instructions

This docu assumes that you have a clean version of the subsite starterkit,
checked out from your project repo.
You should not have built the project just yet at this point!

### 1. Modify the composer.json file`

#### 1.1 Require the ec-europa/reps-platform like so
```
    "ec-europa/reps-platform": "1.*"
```

#### 1.2 Add the package like so`(don't forget the comma after the last package)
```
    {
      "type": "package",
      "package": {
        "name": "ec-europa/reps-platform",
        "version": "1.0",
        "source": {
          "url": "https://github.com/ec-europa/reps-platform-reference.git",
          "type": "git",
          "reference": "master"
        }
      }
    }
```

#### 1.3 Add the post-install-cmd
Modify
```
    "scripts": {
    "post-install-cmd": "resources/scripts/composer/post-install.sh"
    },
```
To
```
    "scripts": {
    "post-install-cmd": ["resources/scripts/composer/post-install.sh","vendor/ec-europa/reps-platform/post-install.sh"]
    },
```

**Make sure that you have correct permissions setup on your local machine!**