#ifndef CHECKPOINT_H_
#define CHECKPOINT_H_

#include <cstddef>

class Checkpoint {
	size_t id;
	
	size_t savePosition;
	size_t currentPosition;
	
	size_t checkpointLevel;
public:
	Checkpoint();
	~Checkpoint();
	
	//Setters
	void setID(size_t id);
	void setPosition(size_t position);
	void setCurrentPosition(size_t currentPosition);
	void setCheckpointLevel(size_t checkpointLevel);
	
	//Getters
	size_t getID();
	size_t getPosition();
	size_t getCurrentPosition();
	size_t getCheckpointLevel();
	
};

#endif
