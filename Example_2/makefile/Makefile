CC = gcc
CFLAGS = -Wall -g

SRC_DIR  = ../src
OBJ_DIR  = ./build
INCLUDES = -I${SRC_DIR}

TARGET   = gas_display.exe

SOURCES_LIST = ${SRC_DIR}/AcmeO2Adapter.c ${SRC_DIR}/AcmeO2SensorProxy.c ${SRC_DIR}/GasDisplay.c ${SRC_DIR}/GasMixer.c ${SRC_DIR}/UltimateO2Adapter.c ${SRC_DIR}/UltimateO2SensorProxy.c ${SRC_DIR}/main.c

OBJECTS_LIST = $(SOURCES_LIST:.c=.o)

TARGET = gas_display.exe

.PHONY: depend clean

all: create_dir build

create_dir:
	mkdir -p ${OBJ_DIR}

build: $(TARGET)
	@echo  Simple compiler named gas_display.exe has been compiled.

$(TARGET): $(OBJECTS_LIST) 
	$(CC) $(CFLAGS) $(INCLUDES) -o $(TARGET) $(OBJECTS_LIST)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) *.o *~ $(TARGET)

depend: $(SOURCES_LIST)
	makedepend $(INCLUDES) $^

# DO NOT DELETE THIS LINE -- make depend needs it
