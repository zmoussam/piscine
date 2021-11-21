#!/bin/sh
find . -name '*.sh' -exec basename -s '.sh' {} \;
