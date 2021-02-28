TARGET = start
LIBS = -lGL -lglfw -lX11 -lpthread -lXrandr -lXi -ldl -lm
OBJ = glad.o
SRC = main.cpp src/player/player.cpp src/obstacles/obstacle.cpp
main:
	g++ -o $(TARGET) $(OBJ) $(SRC) $(LIBS)

clear:
	rm start
