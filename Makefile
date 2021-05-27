CXX = g++
SRC = src
OBJ = obj
BIN = bin
OUT = jafpl

FLAGS = -g -Wall

all: jafpl

jafpl:
	@-mkdir -p $(OBJ)
	@-mkdir -p $(BIN)

	$(CXX) $(FLAGS) -c $(SRC)/*.h $(SRC)/*.cpp

	mv *.o $(OBJ)
	mv $(SRC)/*.gch $(OBJ)

	$(CXX) $(FLAGS) $(OBJ)/*.o -o $(BIN)/$(OUT)