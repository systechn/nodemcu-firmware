#!/bin/bash

build() {
    rm -rf bin/*
    docker run --rm -ti -v `pwd`:/opt/nodemcu-firmware marcelstoer/nodemcu-build build
}

case $1 in
    build)
        build
    ;;
    *)
        echo "Usage: $0 {build}"
    ;;
esac

