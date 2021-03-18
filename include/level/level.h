#ifndef LEVEL_H_
#define LEVEL_H_

#include "../checkpoint/checkpoint.h"
#include <iostream>
#include <map>
#include <cstddef>

class Level {
	size_t option;
	size_t difficulty;
	bool restart = false;
	std::map<float, float> grid;
public:
	Level(size_t option);
	~Level(){};
	void restartLevel(Checkpoint *checkpoint);
	void loader(size_t option);
	void setDifficulty(size_t difficulty);
	size_t getDifficulty();
};

#endif
