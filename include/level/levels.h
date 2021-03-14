#ifndef LEVELS_H_
#define LEVELS_H_

#include <cstddef>
#include <iostream>
#include "level.h"

class Levels {
	size_t difficulty;
public:
	Levels(size_t difficulty);
	~Levels();
	void levelList();
	void selectLevel();
	void showLevels();
};

#endif
