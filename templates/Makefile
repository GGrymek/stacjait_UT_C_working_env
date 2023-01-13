CC ?= gcc
export BUILD_DIR ?= ./build
export SRC_DIR ?= ./src
export TEST_DIR ?= ./test
export TEST_BUILD_DIR ?= ${BUILD_DIR}/test
TEST_MAKEFILE = ${TEST_BUILD_DIR}/MakefileTestSupport
OBJ ?= ${BUILD_DIR}/obj
OBJ_DIR = ${OBJ}
HEADERS_PATHS_LIST = <required header files>
SOURCES_PATHS_LIST = <tested source files>

default: all

all: copy setup test

copy:
	mkdir -p ${SRC_DIR}
	cp -f ${HEADERS_PATHS_LIST} ${SOURCES_PATHS_LIST} ${SRC_DIR}

setup:
	mkdir -p ${BUILD_DIR}
	mkdir -p ${OBJ}
	ruby <path to create_makefile.rb> --silent

clean:
	rm -rf ${SRC_DIR}
	rm -rf ${BUILD_DIR}

test: setup

-include ${TEST_MAKEFILE}
