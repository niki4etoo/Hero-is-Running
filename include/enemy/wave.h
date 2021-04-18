#ifndef WAVE_H_
#define WAVE_H_

#include <cstddef>
#include <iostream>

class Wave {
	size_t id;
	//Multipliers for each wave
	float speedFactor;
	float damageFactor;
	float shieldFactor;
	
	size_t countFactor;
public:
	Wave();
	~Wave(){};
	
	//Setters
	void setID(size_t id);
	void setSpeedFactor(float speedFactor);
	void setDamageFactor(float damageFactor);
	void setShieldFactor(float shieldFactor);
	
	void setCountFactor(size_t countFactor);
	
	//Getters
	size_t getID();
	float getSpeedFactor();
	float getDamageFactor();
	float getShieldFactor();
	
	size_t getCountFactor();
};

#endif
