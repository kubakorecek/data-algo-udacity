SRC=./src
TARGET=./target
GCC = g++
CFLAGS = -o $(TARGET)/RecMult.out
ARGS = 101
RM = rm -rf

all: clean default test

default: RecMult.cpp

RecMult.cpp:
    $(GCC) $(CFLAGS) $(SRC)/main/CoinFlipper.cpp

test: RecMult.cpp
    $(TARGET)/RecMult.out $(ARGS)

clean:
    $(RM) $(TARGET)/*.out