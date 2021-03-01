#!/bin/bash

if [ "$1" = "release" ]
then
    echo "\nRunning release build."
    ./bin/release/carsGames
else
    echo "\nRunning debug build."
    echo "Use argument \"release\" to run in release mode."
    ./bin/debug/carsGames
fi
