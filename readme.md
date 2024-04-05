# Basic WASM example


## Setup Emscripten

Install [Emscripten](https://emscripten.org/docs/getting_started/downloads.html) as shown below:

```bash
# Get the emsdk repo
git clone https://github.com/emscripten-core/emsdk.git

# Enter that directory
cd emsdk

# Download and install the latest SDK tools.
./emsdk install latest

# Make the "latest" SDK "active" for the current user. (writes .emscripten file)
./emsdk activate latest

# Activate PATH and other environment variables in the current terminal
source ./emsdk_env.sh
```

## Build the WASM

```bash 
emcc lib/add.c -s WASM=1 -s EXPORTED_FUNCTIONS=_sum_array,_malloc,_free -o func/add.js
```

## Run the server

```bash
python3 -m http.server
```
