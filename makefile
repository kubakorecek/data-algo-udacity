SRC=./src
TARGET=./target
GCC = g++
CFLAGS =-Wall -pedantic -g -O2 -o $(TARGET)/main.out
ARGS = 101
RM = rm -rf

all: clean default test

default: $(SRC)/main/main.cpp

main.cpp:
	$(GCC) $(CFLAGS) $(SRC)/main/main.cpp $(SRC)/RecMult.cpp $(SRC)/Fibonacci.cpp

test: main.cpp
	$(TARGET)/main.out $(ARGS) 

clean:
	$(RM) $(TARGET)/*.out
