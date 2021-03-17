#include "../../include/enemy/enemy_status.h"

EnemyStatus::EnemyStatus(size_t id, std::string name, size_t health){
	this->id = id;
	this->name = name;
	this->health = health;
}

bool EnemyStatus::isAlive(){
	return this->alive;
}

void EnemyStatus::pointsTaken(){
	std::cout << "Points taken: " << this->points << std::endl;
}

//Setters

void EnemyStatus::setID(size_t id){
	this->id = id;
}

void EnemyStatus::setName(std::string name){
	this->name = name;
}

void EnemyStatus::setHealth(size_t health){
	this->health = health;
}

void EnemyStatus::setPoints(size_t points){
	this->points = points;
}

//Getters

size_t EnemyStatus::getID(){
	return this->id;
}

std::string EnemyStatus::getName(){
	return this->name;
}

size_t EnemyStatus::getHealth(){
	return this->health;
}

size_t EnemyStatus::getPoints(){
	return this->points;
}
