#!/bin/sh
sudo apt-get install doxygen
sudo apt-get install libsdl1.2-dev
curl http://barelyconsciousgames.com/dgen-sdl-1.33.tar.gz --output ./dgen-sdl-1.33.tar.gz
tar -xf ./dgen-sdl-1.33.tar.gz -C ./
cd dgen-sdl-1.33
./configure --with-doxygen --enable-debugger --enable-debug-vdp --disable-opengl
make
sudo make install 
cd ..
rm -rf dgen*.gz
rm -rf dgen-sdl-1.33