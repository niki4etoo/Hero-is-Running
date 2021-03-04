#ifndef LEVEL_H_
#define LEVEL_H_

#include <cstddef>

class Level {
	size_t option;
	size_t difficulty;
public:
	Level(size_t option);
	~Level(){};
	void loader(size_t option);
	void setDifficulty(size_t difficulty);
	size_t getDifficulty();
};

#endif
