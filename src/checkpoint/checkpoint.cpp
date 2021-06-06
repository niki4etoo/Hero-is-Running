#include "../../include/checkpoint/checkpoint.h"

Checkpoint::Checkpoint()
{
	this->savePosition = this->getPosition();
	this->currentPosition = this->getCurrentPosition();
}

void Checkpoint::setID(size_t id){
	this->id = id;
}

void Checkpoint::setCheckpointLevel(size_t checkpointLevel){
	this->checkpointLevel = checkpointLevel;
}

void Checkpoint::setPosition(size_t position){
	this->savePosition = position;
}

void Checkpoint::setCurrentPosition(size_t currentPosition){
	this->currentPosition = currentPosition;
}

void Checkpoint::setWidth(size_t width){
	this->width = width;
}

void Checkpoint::setHeight(size_t height){
	this->height = height;
}

void Checkpoint::setName(std::string name){
	this->name = name;
}

size_t Checkpoint::getID(){
	return this->id;
}

size_t Checkpoint::getCurrentPosition(){
	return this->currentPosition;
}

size_t Checkpoint::getPosition(){
	return this->savePosition;
}

size_t Checkpoint::getCheckpointLevel(){
	return this->checkpointLevel;
}

size_t Checkpoint::getWidth(){
	return this->width;
}

size_t Checkpoint::getHeight(){
	return this->height;
}

std::string Checkpoint::getName(){
	return this->name;
}
