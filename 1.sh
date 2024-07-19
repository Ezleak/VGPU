#!/bin/bash
cd ..
cd VGPU
mkdir ./glslang
cd ./glslang
git clone --depth 1 --branch main https://github.com/KhronosGroup/glslang
cd ..
cd VGPU/glslang
ls
