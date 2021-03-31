#include "../../include/player/player.h"

Player::Player(unsigned int id, unsigned int health, float damage,
	       float shieldPoints, float speed, float jumpFactor)
    : id(0),
      health(100),
      damage(5.0f),
      shieldPoints(1.0f),
      speed(25.0f),
      jumpFactor(3.0f) {
		  Score *scores = new Score(0);
		  std::cout << scores->getInitPoints() << std::endl;
		  }

void Player::setID(unsigned int id) { this->id = id; }

void Player::setHealth(unsigned int health) { this->health = health; }

void Player::setDamage(float damage) { this->damage = damage; }

void Player::setShieldPoints(float shieldPoints) {
	this->shieldPoints = shieldPoints;
}

void Player::setSpeed(float speed) { this->speed = speed; }

void Player::setJumpFactor(float jumpFactor) {
	this->jumpFactor = jumpFactor;
}

unsigned int Player::getID() { return this->id; }

unsigned int Player::getHealth() { return this->health; }

float Player::getDamage() { return this->damage; }

float Player::getShieldPoints() { return this->shieldPoints; }

float Player::getSpeed() { return this->speed; }

float Player::getJumpFactor() { return this->jumpFactor; }
