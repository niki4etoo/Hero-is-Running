TARGET = start
LIBS = -lGL -lglfw
SRC = main.cpp src/player/player.cpp
main:
	g++ -o $(TARGET) $(SRC) $(LIBS)

clear:
	rm start
