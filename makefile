SRC=./src
TARGET=./target
GCC = g++
CFLAGS = -o $(TARGET)/Mult.out
ARGS = 101
RM = rm -rf

all: clean default test

default: Mult.cpp

Mult.cpp:
	$(GCC) $(CFLAGS) $(SRC)/main/Mult.cpp $(SRC)/RecMult.cpp

test: Mult.cpp
	$(TARGET)/Mult.out $(ARGS) 

clean:
	$(RM) $(TARGET)/*.out
