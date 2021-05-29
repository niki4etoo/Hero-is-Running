#ifndef LEVELS_H_
#define LEVELS_H_

#include <cstddef>
#include <iostream>
#include <string>
#include "level.h"

class Levels {
	size_t difficulty;
	
	std::string style;
	size_t stageSize;
public:
	Levels(size_t difficulty);
	~Levels();
	void levelList();
	void selectLevel();
	void showLevels();
	
	//Setters
	void setDifficulty(size_t difficulty);
	void setStyle(std::string style);
	void setStageSize(size_t size);
	
	//Getters
	size_t getDifficulty();
	std::string getStyle();
	size_t getStageSize();
	
};

#endif
