Unfortunately, the precompiled libraries for glibc for sslittle use a .a instead of a .so. This means it expects a main() function, so I can't create shared libraries. Doing a make doesn't work.

In the meantime, you'll have to compile the SPMS library inline with the other programs. See the example directory's makefile for details.
