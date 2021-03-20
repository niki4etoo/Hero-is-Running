#include "../../include/level/level_status.h"

LevelStatus::LevelStatus(){
		std::cout << "Current Level Status: " << std::endl;
		// to do
}

void LevelStatus::currentLevel(){
	std::cout << "Current Level: " << this->level << std::endl;
}

void LevelStatus::obstacles(){
	std::cout << "Obstacles: " << this->obstaclesCount << std::endl;
}

void LevelStatus::time(){
	std::cout << "Time: " << this->currentTime << std::endl;
}

void LevelStatus::checkpoints(){
	std::cout << "Checkpoints: " << this->checkpointsCount << std::endl;
}

size_t LevelStatus::getLevel(){
	return this->level;
}

size_t LevelStatus::getObstaclesCount(){
	return this->obstaclesCount;
}

size_t LevelStatus::getCurrentTime(){
	return this->currentTime;
}

size_t LevelStatus::getCheckpointsCount(){
	return this->checkpointsCount;
}
