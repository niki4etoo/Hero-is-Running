#include "../../include/ui/hud.h"

HUD::HUD(){
	//init status bars and fields
	this->health = 100;
	this->shield = 10;
	this->damage = 20;
	this->points = 0;
	this->time = 0;
}

void HUD::healthBar(){
	//Location (to do)
}

void HUD::shieldBar(){
	//Location (to do)
}

void HUD::damageBar(){
	//Location (to do)
}

void HUD::pointsField(){
	//Location (to do)
}

void HUD::timeField(){
	//Location (to do)
}

//Setters
void HUD::setHealth(unsigned int health){
	this->health = health;
}

void HUD::setShield(unsigned int shield){
	this->shield = shield;
}

void HUD::setDamage(unsigned int damage){
	this->damage = damage;
}

void HUD::setPoints(unsigned int points){
	this->points = points;
}

void HUD::setTime(unsigned int time){
	this->time = time;
}

//Getters
unsigned int HUD::getHealth(){
	return this->health;
}

unsigned int HUD::getShield(){
	return this->shield;
}

unsigned int HUD::getDamage(){
	return this->damage;
}

unsigned int HUD::getPoints(){
	return this->points;
}

unsigned int HUD::getTime(){
	return this->time;
}
