#include "../../include/player/achievements.h"

//Setters
void Achievements::setPoints(size_t points){
	this->points = points;
}

void Achievements::setRewardType(size_t rewardType){
	this->rewardType = rewardType;
}


//Getters
size_t Achievements::getPoints(){
	return this->points;
}

size_t Achievements::getRewardType(){
	return this->rewardType;
}
