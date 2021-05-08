#include "../../include/player/rewards.h"

//Setters
void Rewards::setID(size_t id){
	this->id = id;
}

void Rewards::setType(size_t type){
	this->type = type;
}

void Rewards::setName(std::string name){
	this->name = name;
}

//Getters
size_t Rewards::getID(){
	return this->id;
}

size_t Rewards::getType(){
	return this->type;
}

std::string Rewards::getName(){
	return this->name;
}
