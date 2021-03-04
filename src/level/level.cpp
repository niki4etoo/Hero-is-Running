#include "../../include/level/level.h"

Level::Level(size_t option){
	this->option = option;
	
	//Level selection
	switch(this->option) {
		case 1:
			//level 1
			break;
		case 2:
			//level 2
			break;
		case 3:
			//level 3
			break;
	}
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