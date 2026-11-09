#!/bin/bash

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")")"

set -e

g++ -std=c++17 src/main.cpp -o app -lcpr -lcurl -lssl -lcrypto

./app
