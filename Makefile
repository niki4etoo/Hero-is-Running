TARGET = start
LIBS = -lGL -lglfw -lX11 -lpthread -lXrandr -lXi -ldl -lm
OBJ = glad.o
SRC = main.cpp src/player/player.cpp src/player/player_profile.cpp src/player/player_status.cpp src/player/achievements.cpp src/player/rewards.cpp \
		src/obstacles/obstacle.cpp src/obstacles/spikes.cpp src/checkpoint/checkpoint.cpp src/risk/risk_management.cpp src/risk/risk_profile.cpp \
		src/scores/score.cpp src/level/level.cpp src/level/levels.cpp src/level/level_status.cpp src/level/terrain.cpp \
		src/enemy/enemy.cpp src/enemy/enemy_status.cpp src/enemy/wave.cpp \
		src/ui/main_menu.cpp src/ui/hud.cpp src/ui/settings.cpp
main:
	g++ -o $(TARGET) $(OBJ) $(SRC) $(LIBS)

clear:
	rm start
