CC ?= gcc
export BUILD_DIR ?= ./build
export SRC_DIR ?= ../src
OBJ ?= ${BUILD_DIR}/obj
OBJ_DIR = ${OBJ}
HEADERS_PATHS_LIST = ${SRC_DIR}/AdcHardware.h ${SRC_DIR}/Types.h ${SRC_DIR}/AdcHardwareConfigurator.h ${SRC_DIR}/AdcTemperatureSensor.h ${SRC_DIR}/AT91SAM7X256.h
SOURCES_PATHS_LIST = ${SRC_DIR}/AdcHardware.c

default: all

all: build

build:
	mkdir -p ${BUILD_DIR}
	mkdir -p ${OBJ}

clean:
	rm -rf ${BUILD_DIR}
