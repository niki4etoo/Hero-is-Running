#include "../../include/obstacles/spikes.h"

//Setters
void Spikes::setType(std::string type){
	this->type = type;
}

void Spikes::setWidth(size_t width){
	this->width = width;
}

void Spikes::setHeight(size_t height){
	this->height = height;
}

void Spikes::setCount(size_t count){
	this->count = count;
}

void Spikes::setPosX(size_t posX){
	this->posX = posX;
}

void Spikes::setPosY(size_t posY){
	this->posY = posY;
}

//Getters
std::string Spikes::getType(){
	this->type = type;
}

size_t Spikes::getWidth(){
	this->width = width;
}

size_t Spikes::getHeight(){
	this->height = height;
}

size_t Spikes::getCount(){
	this->count = count;
}

size_t Spikes::getPosX(){
	this->posX = posX;
}
size_t Spikes::getPosY(){
	this->posY = posY;
}
