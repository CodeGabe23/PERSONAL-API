#!/bin/bash
set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")")"

g++ -std=c++20 src/main.cpp -o app -lcpr -lcurl -lssl -lcrypto

./app
