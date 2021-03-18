#include "../../include/level/level.h"
#include "../../include/checkpoint/checkpoint.h"

Level::Level(size_t option){
	std::cout << "Level " << option << std::endl;
	
	//Populate grid
	std::map<float, float> grid = { { 0.0f, 0.0f }, { 0.5f, 0.5f }, { 1.0f, 1.0f } };
	
	for(auto ibegin = grid.begin(); ibegin != grid.end(); ++ibegin)
	{
		std::cout << "x: " << ibegin->first << "y: " << ibegin->second << std::endl;
	}
	
}

void restartLevel(Checkpoint *checkpoint){
	//Go to last checkpoint
	size_t lastPosition = 0;
	lastPosition = checkpoint->getCurrentPosition();
}

void Level::loader(size_t option){
	this->option = option;
}

void Level::setDifficulty(size_t difficulty){
	this->difficulty = option;
}

size_t Level::getDifficulty(){
	return difficulty;
}
