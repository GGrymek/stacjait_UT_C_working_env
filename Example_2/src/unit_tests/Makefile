CC ?= gcc
export BUILD_DIR ?= ./build
export SRC_DIR ?= ./src
export TEST_DIR ?= ./test
export TEST_BUILD_DIR ?= ${BUILD_DIR}/test
TEST_MAKEFILE = ${TEST_BUILD_DIR}/MakefileTestSupport
OBJ ?= ${BUILD_DIR}/obj
OBJ_DIR = ${OBJ}
HEADERS_PATHS_LIST = ../GasMixer.h ../iO2Sensor.h ../AcmeO2Adapter.h ../UltimateO2Adapter.h ../AcmeO2SensorProxy.h ../UltimateO2SensorProxy.h
SOURCES_PATHS_LIST = ../GasMixer.c

default: all

all: copy setup test

copy:
	mkdir -p ${SRC_DIR}
	cp -f ${HEADERS_PATHS_LIST} ${SOURCES_PATHS_LIST} ${SRC_DIR}

setup:
	mkdir -p ${BUILD_DIR}
	mkdir -p ${OBJ}
	ruby ../../tools/create_makefile.rb --silent

clean:
	rm -rf ${SRC_DIR}
	rm -rf ${BUILD_DIR}

test: setup

-include ${TEST_MAKEFILE}
