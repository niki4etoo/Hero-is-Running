#include "../../include/player/player.h"

Player::Player(unsigned int id, unsigned int health, float damage,
	       float shieldPoints, float speed, float jumpFactor)
    : id(0),
      health(100),
      damage(5.0f),
      shieldPoints(1.0f),
      speed(25.0f),
      jumpFactor(3.0f) {
		  this->scores.setInitPoints(1);
		  std::cout << this->scores.getInitPoints() << std::endl;
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

void Player::setFirstName(std::string firstName){
	this->firstName = firstName;
}

void Player::setLastName(std::string lastName){
	this->lastName = lastName;
}

void Player::setAge(size_t age){
	this->age = age;
}

unsigned int Player::getID() { return this->id; }

unsigned int Player::getHealth() { return this->health; }

float Player::getDamage() { return this->damage; }

float Player::getShieldPoints() { return this->shieldPoints; }

float Player::getSpeed() { return this->speed; }

float Player::getJumpFactor() { return this->jumpFactor; }

std::string Player::getFirstName(){
	return this->firstName;
}

std::string Player::getLastName(){
	return this->lastName;
}

size_t Player::getAge(){
	return this->age;
}
