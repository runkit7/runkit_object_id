runkit\_object\_id (by the runkit7 project)
======================================================

For the safest function in [runkit(7)](https://github.com/runkit7/runkit7).
This implements `runkit_object_id() : int`,
which is similar to `spl_object_hash() : string`, but returns an integer instead of a string.
It's faster if you need to take the ids of a large number of objects.

[An integer id has been a requested function for a while, but doesn't seem like it will be added to the php standard libraries](https://bugs.php.net/bug.php?id=52657)

Supports php 7.0\+. PHP 5.x support will be added back later.

See [runkit\_object\_id-api.php](./runkit_object_id-api.php) for function stubs, and an alternate (slower) pure PHP implementation.

[![Build Status](https://travis-ci.org/runkit7/runkit_object_id.svg?branch=master)](https://travis-ci.org/runkit7/runkit_object_id)
[![Build Status (Windows)](https://ci.appveyor.com/api/projects/status/dmlr3sc8153n9cjv?svg=true)](https://ci.appveyor.com/project/TysonAndre/runkit-object-id)

Installation
============

Similar to [runkit7 installation steps](https://github.com/runkit7/runkit7#installation), but using this repo instead.

If runkit (`extension=runkit.so`) is installed and enabled, then disable this module.
