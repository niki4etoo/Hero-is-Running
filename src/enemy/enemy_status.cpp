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
