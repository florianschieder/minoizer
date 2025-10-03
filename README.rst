========
minoizer
========

minoizer (minimal memoizer) is a tiny C++ library for memoizing
results from expensive computation.

How to use
----------

For a basic example see `examples/example01_basic.cpp`.

All you need to cache a long-running function is

- the function `memo`

A first call of `memo(n)` will result in a Cache-Miss, every further call of
`memo(n)` will result in a Cache-Hit. Using N as the sum of cached items and
std::map as the caching container, the complexity of retrieving a value from
the cache takes equals to `O(log N)`.

See `examples/example02_fibonacci.cpp` to see the well-known "dynamic
programming" approach for fast fibonacci number computation.


How to develop
--------------

Prerequisites for development:

  - g++
  - python3
  - rstcheck
  - clang_format


Guidelines
----------

When adding new code, do not forget to apply the style guide
(run `tools/apply-code-style`).


How to compile
--------------
Assuming a clean working directory, execute

  - `make` to build minoizer,

  - `sudo make install` to install libcache.so to /usr/lib

  - `make examples` to build the examples.

Run `make clean` to clean object and binary files.
