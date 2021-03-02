#ifndef CHECKPOINT_H_
#define CHECKPOINT_H_

#include <cstddef>

class Checkpoint {
	size_t savePosition;
	size_t currentPosition;
public:
	Checkpoint();
	~Checkpoint();
	void setPosition(size_t position);
	void setCurrentPosition(size_t currentPosition);
	size_t getPosition();
	size_t getCurrentPosition();
};

#endif
