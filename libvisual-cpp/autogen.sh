#!/bin/sh

libtoolize && \
aclocal && \
autoheader && \
automake -a && \
autoconf
