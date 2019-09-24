#!/bin/bash

# nodemcu-uploader --port COM3 upload init.lua
# nodemcu-uploader --port COM3 upload oak.img

build() {
    rm -rf bin/*
    docker run --rm -ti -v `pwd`:/opt/nodemcu-firmware marcelstoer/nodemcu-build build
}

app() {
    ./luac.cross -f -s -m 0x10000 -o oak.img oak/app/*.lua
}

case $1 in
    build)
        build
    ;;
    app)
        app
    ;;
    *)
        echo "Usage: $0 {build|app}"
    ;;
esac

