#ifndef LEVEL_STATUS_H
#define LEVEL_STATUS_H

#include <iostream>

class LevelStatus {
	size_t level;
	size_t obstaclesCount;
	size_t currentTime;
	size_t checkpointsCount;
public:
	LevelStatus();
	~LevelStatus();
	
	void currentLevel();
	void obstacles();
	void time();
	void checkpoints();
	
	size_t getLevel();
	size_t getObstaclesCount();
	size_t getCurrentTime();
	size_t getCheckpointsCount();
};

#endif
