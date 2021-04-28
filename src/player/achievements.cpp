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


void Achievements::unlockAchievement(size_t points, size_t rewardType, size_t achievementType){
	
	//Based on points, unlock certain types of rewards and achievements
	
	if(points >= 200 && points <= 499){
		// to do
	} else if (points >= 500 && points <= 749) {
		// to do
	} else if (points >= 750) {
		// to do
	}
}
