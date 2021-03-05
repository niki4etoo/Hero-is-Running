#ifndef ENEMY_H_
#define ENEMY_H_

#include <cstddef>
#include <string>
#include <iostream>

class Enemy {
	size_t id;
	std::string name;
	size_t type;
	size_t level;
public:
	Enemy(size_t id, std::string name, size_t type, size_t level);
	~Enemy();
	void spawn();
	void setID(size_t id);
	void setName(std::string name);
	void setType(size_t type);
	void setLevel(size_t level);
	size_t getID();
	std::string getName();
	size_t getType();
	size_t getLevel();
	
};

#endif
