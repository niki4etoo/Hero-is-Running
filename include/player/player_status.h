#ifndef PLAYER_STATUS_H_
#define PLAYER_STATUS_H_
#include <iostream>
#include <cstddef>

class PlayerStatus {
	size_t totalScores;
public:
	PlayerStatus();
	~PlayerStatus(){};
	void scores();
	void setTotalScores(size_t totalScores);
	size_t getTotalScores();
};

#endif
