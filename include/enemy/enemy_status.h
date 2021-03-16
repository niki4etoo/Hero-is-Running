#ifndef ENEMY_STATUS_H_
#define ENEMY_STATUS_H_

#include <cstddef>
#include <iostream>


class EnemyStatus {
	size_t id;
	std::string name;
	size_t health;
	size_t points;
	bool alive = false;
public:
	EnemyStatus(size_t id, std::string name, size_t health);
	~EnemyStatus();
	bool isAlive();
	void pointsTaken();
};

#endif
