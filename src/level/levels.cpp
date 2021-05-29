#include "../../include/level/levels.h"

Levels::Levels(size_t difficulty){
	std::cout << difficulty << std::endl;
}

void Levels::levelList(){
	//to do
}

void Levels::selectLevel(){
	//to do
}

void Levels::showLevels(){
	//to do	
}


//Setters
void Levels::setDifficulty(size_t difficulty){
	this->difficulty = difficulty;
}

void Levels::setStyle(std::string style){
	this->style = style;
}

void Levels::setStageSize(size_t size){
	this->stageSize = size;
}


//Getters
size_t Levels::getDifficulty(){
	return this->difficulty;
}

std::string Levels::getStyle(){
	return this->style;
}

size_t Levels::getStageSize(){
	return this->stageSize;
}
