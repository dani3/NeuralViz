#!/bin/bash

echo "######################################"
echo "#       Install dependencies         #"
echo "######################################"

./vcpkg.exe install spdlog

# build with cmake
# TODO
