#ifndef CHECKPOINT_H_
#define CHECKPOINT_H_

#include <cstddef>
#include <string>

class Checkpoint {
	size_t id;
	
	size_t savePosition;
	size_t currentPosition;
	
	size_t checkpointLevel;
	
	size_t width, height;
	
	std::string name;
public:
	Checkpoint();
	~Checkpoint();
	
	//Setters
	void setID(size_t id);
	void setPosition(size_t position);
	void setCurrentPosition(size_t currentPosition);
	void setCheckpointLevel(size_t checkpointLevel);
	
	void setWidth(size_t width);
	void setHeight(size_t height);
	
	void setName(std::string name);
	
	//Getters
	size_t getID();
	size_t getPosition();
	size_t getCurrentPosition();
	size_t getCheckpointLevel();
	
	size_t getWidth();
	size_t getHeight();
	
	std::string getName();
};

#endif
