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
