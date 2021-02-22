#include "../../include/player/player.h"

Player::Player(unsigned int id, unsigned int health, float damage,
	       float shield_points, float speed, float jump_factor)
    : id(0),
      health(100),
      damage(5.0f),
      shield_points(1.0f),
      speed(25.0f),
      jump_factor(3.0f) {}

void Player::set_id(unsigned int id) { this->id = id; }

void Player::set_health(unsigned int health) { this->health = health; }

void Player::set_damage(float damage) { this->damage = damage; }

void Player::set_shield_points(float shield_points) {
	this->shield_points = shield_points;
}

void Player::set_speed(float speed) { this->speed = speed; }

void Player::set_jump_factor(float jump_factor) {
	this->jump_factor = jump_factor;
}

unsigned int Player::get_id() { return this->id; }

unsigned int Player::get_health() { return this->health; }

float Player::get_damage() { return this->damage; }

float Player::get_shield_points() { return this->shield_points; }

float Player::get_speed() { return this->speed; }

float Player::get_jump_factor() { return this->jump_factor; }
