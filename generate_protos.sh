#!/bin/bash

mkdir -p generated_cpp

protoc --cpp_out=generated_cpp \
       --proto_path=./protos \
       ./protos/*.proto
