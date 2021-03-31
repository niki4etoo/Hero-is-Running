#ifndef PLAYER_H_
#define PLAYER_H_

#include "../scores/score.h"

#include <cstddef>
#include <iostream>

class Player {
	unsigned int id;

	unsigned int health;
	float damage;
	float shieldPoints;
	float speed;

	float jumpFactor;

	size_t enemyDown;
public:
	Player(unsigned int id, unsigned int health, float damage,
	       float shieldPoints, float speed, float jumpFactor);
	~Player();
	void setID(unsigned int id);
	void setHealth(unsigned int health);
	void setDamage(float damage);
	void setShieldPoints(float shieldPoints);
	void setSpeed(float speed);
	void setJumpFactor(float jumpFactor);
	unsigned int getID();
	unsigned int getHealth();
	float getDamage();
	float getShieldPoints();
	float getSpeed();
	float getJumpFactor();
};

#endif
