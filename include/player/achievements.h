#ifndef ACHIEVEMENTS_H_
#define ACHIEVEMENTS_H_

#include <cstddef>

class Achievements {
	size_t points;
	size_t rewardType;
public:
	Achievements(){};
	~Achievements(){};
	
	//Setters
	void setPoints(size_t points);
	void setRewardType(size_t rewardType);
	
	//Getters
	size_t getPoints();
	size_t getRewardType();
	
	//Unlock achievements of certain types
	void unlockAchievement(size_t points, size_t rewardType, size_t achievementType);
};

#endif
