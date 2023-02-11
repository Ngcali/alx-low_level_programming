#!/bin/bash

./create_static_lib.sh
ls *.a
ar -t liball.a
