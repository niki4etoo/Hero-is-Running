#ifndef LEVEL_H_
#define LEVEL_H_

#include "../checkpoint/checkpoint.h"
#include "../obstacles/obstacle.h"
#include <iostream>
#include <map>
#include <cstddef>

class Level {
	size_t option;
	size_t difficulty;
	bool start = false;
	bool loaded = false;
	bool restart = false;
	std::map<float, float> grid;
	Obstacle obstacle;
public:
	Level(size_t option);
	~Level(){};
	void restartLevel(Checkpoint *checkpoint);
	void loader(size_t option);
	void setDifficulty(size_t difficulty);
	size_t getDifficulty();
	
	bool isStarted(bool start);
	bool isLoaded(bool loaded);
	bool isRestarted(bool restart);
};

#endif
