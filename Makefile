TARGET = start
LIBS = -lGL -lglfw -lX11 -lpthread -lXrandr -lXi -ldl -lm
OBJ = glad.o
SRC = main.cpp src/player/player.cpp src/player/player_profile.cpp src/obstacles/obstacle.cpp src/checkpoint/checkpoint.cpp \
		src/scores/score.cpp src/level/level.cpp src/level/levels.cpp src/enemy/enemy.cpp src/ui/main_menu.cpp \
		src/ui/hud.cpp
main:
	g++ -o $(TARGET) $(OBJ) $(SRC) $(LIBS)

clear:
	rm start
