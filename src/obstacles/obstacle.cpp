#include "../../include/obstacles/obstacle.h"

Obstacle::Obstacle(){
	
}

void Obstacle::setID(size_t id) {
	this->id = id;
}

void Obstacle::setType(size_t type) {
	this->type = type;
}

void Obstacle::setWidth(float width) {
	this->width = width;
}

void Obstacle::setHeight(float height) {
	this->height = height;
}

void Obstacle::setLocation(float x, float y) {
	this->x = x;
	this->y = y;
}

void Obstacle::setMovable(bool isMovable) {
	this->isMovable = isMovable;
}

void Obstacle::setStatic(bool isStatic) {
	this->isStatic = isStatic;
}

void Obstacle::setActive(bool isActive) {
	this->isActive = isActive;
}

void Obstacle::setDifficulty(size_t difficulty){
	this->difficulty = difficulty;
}

void Obstacle::setLabel(std::string label){
	this->label = label;
}

size_t Obstacle::getID() {
	return this->id;
}

size_t Obstacle::getType() {
	return this->type;
}

float Obstacle::getHeight() {
	return this->height;
}

float Obstacle::getWidth() {
	return this->width;
}

float Obstacle::getLocationX() {
	return this->x;
}

float Obstacle::getLocationY() {
	return this->y;
}

bool Obstacle::getMovable(){
	return this->isMovable;
}

bool Obstacle::getStatic(){
	return this->isStatic;
}

bool Obstacle::getActive(){
	return this->isActive;
}

size_t Obstacle::getDifficulty(){
	return this->difficulty;
}

std::string Obstacle::getLabel(){
	return this->label;
}
