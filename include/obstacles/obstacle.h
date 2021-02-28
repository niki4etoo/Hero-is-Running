#ifndef OBSTACLE_H_
#define OBSTACLE_H_

#include <cstddef>

class Obstacle {
	size_t id;
	size_t type;
	float width;
	float height;
	float x, y;
public:
	Obstacle(size_t id, size_t type, float width = 100, float height = 50, float x = 0, float y = 0);
	~Obstacle();
	void setID(size_t id);
	void setType(size_t type);
	void setHeight(float height);
	void setWidth(float width);
	void setLocation(float x, float y);
	size_t getID();
	size_t getType();
	float getHeight();
	float getWidth();
	float getLocationX();
	float getLocationY();
};

#endif
