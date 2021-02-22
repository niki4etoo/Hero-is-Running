#ifndef PLAYER_H_
#define PLAYER_H_

class Player {
	unsigned int id;

	unsigned int health;
	float damage;
	float shield_points;
	float speed;

	float jump_factor;

       public:
	Player(unsigned int id, unsigned int health, float damage,
	       float shield_points, float speed, float jump_factor);
	~Player();
	void set_id(unsigned int id);
	void set_health(unsigned int health);
	void set_damage(float damage);
	void set_shield_points(float shield_points);
	void set_speed(float speed);
	void set_jump_factor(float jump_factor);
	unsigned int get_id();
	unsigned int get_health();
	float get_damage();
	float get_shield_points();
	float get_speed();
	float get_jump_factor();
};

#endif
