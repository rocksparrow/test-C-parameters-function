#!/bin/bash

echo "Test FOO_METHODE"
echo "****************"
gcc test.c -DFOO_METHODE ||exit 1
time ./a.exe
echo ""
echo ""
echo "Test BAR_METHODE"
echo "****************"
gcc test.c -DBAR_METHODE || exit 1
time ./a.exe

