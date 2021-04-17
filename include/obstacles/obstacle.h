#ifndef OBSTACLE_H_
#define OBSTACLE_H_

#include <cstddef>

class Obstacle {
	size_t id;
	size_t type;
	float width;
	float height;
	float x, y;
	
	bool isMovable = false;
	bool isStatic = false;
	bool isActive = false;
public:
	Obstacle(size_t id, size_t type, float width = 100, float height = 50, float x = 0, float y = 0);
	~Obstacle();
	
	//Setters
	void setID(size_t id);
	void setType(size_t type);
	void setHeight(float height);
	void setWidth(float width);
	void setLocation(float x, float y);
	
	void setMovable(bool isMovable);
	void setStatic(bool isStatic);
	void setActive(bool isActive);
	
	
	//Getters
	size_t getID();
	size_t getType();
	float getHeight();
	float getWidth();
	float getLocationX();
	float getLocationY();
	
	bool getMovable();
	bool getStatic();
	bool getActive();
};

#endif
