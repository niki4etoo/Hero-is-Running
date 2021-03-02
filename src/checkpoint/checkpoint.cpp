#include "../../include/checkpoint/checkpoint.h"

Checkpoint::Checkpoint()
{
	this->savePosition = this->getPosition();
	this->currentPosition = this->getCurrentPosition();
}

void Checkpoint::setPosition(size_t position){
	this->savePosition = position;
}

void Checkpoint::setCurrentPosition(size_t currentPosition){
	this->currentPosition = currentPosition;
}

size_t Checkpoint::getCurrentPosition(){
	return this->currentPosition;
}

size_t Checkpoint::getPosition(){
	return this->savePosition;
}
