#include "../../include/enemy/wave.h"

Wave::Wave(){
	std::cout << "Wave 1 has spawned!" << std::endl;
}	

//Setters
void Wave::setID(size_t id){
	this->id = id;
}

void Wave::setSpeedFactor(float speedFactor){
	this->speedFactor = speedFactor;
}

void Wave::setDamageFactor(float damageFactor){
	this->damageFactor = damageFactor;
}

void Wave::setShieldFactor(float shieldFactor){
	this->shieldFactor = shieldFactor;
}


void Wave::setCountFactor(size_t countFactor){
	this->countFactor = countFactor;
}

//Getters
size_t Wave::getID(){
	return this->id;
}

float Wave::getSpeedFactor(){
	return this->speedFactor;
}

float Wave::getDamageFactor(){
	return this->damageFactor;
}

float Wave::getShieldFactor(){
	return this->shieldFactor;
}


size_t Wave::getCountFactor(){
	return this->countFactor;
}
