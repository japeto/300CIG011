# Overview

Code for 300CIG011-2023I from OSTEP chapter [Introduction](http://pages.cs.wisc.edu/~remzi/OSTEP/intro.pdf).

To compile, just type:
```
prompt> make
```

See the highly primitive `Makefile` for details.

Then, run them! Examples:

```
prompt> ./cpu A
```

```
prompt> ./mem 1
```

```
prompt> ./threads 10000
```

```
prompt> ./io
```


## Details

One issue with mem.c is that address space randomization is usually on by
default. To turn it off:

### macOS
From [stackoverflow](http://stackoverflow.com/questions/23897963/documented-way-to-disable-aslr-on-os-x)

Just compile/link as follows:
    gcc -o mem mem.c -Wall -Wl,-no_pie

REFERENCE
https://github.com/remzi-arpacidusseau/ostep-code/tree/master/intro
