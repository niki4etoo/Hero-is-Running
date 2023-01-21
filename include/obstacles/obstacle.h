#ifndef OBSTACLE_H_
#define OBSTACLE_H_

#include <cstddef>
#include <string>

class Obstacle {
	size_t id;
	size_t type;
	size_t difficulty;
	
		
	
	std::string label;
	std::string style;
	
	float width;
	float height;
	float x, y;
	
	bool isMovable = false;
	bool isStatic = false;
	bool isActive = false;
public:
	Obstacle();
	~Obstacle(){};
	
	//Setters
	void setID(size_t id);
	void setType(size_t type);
	void setHeight(float height);
	void setWidth(float width);
	void setLocation(float x, float y);
	
	void setMovable(bool isMovable);
	void setStatic(bool isStatic);
	void setActive(bool isActive);
	
	void setLabel(std::string label);
	void setStyle(std::string style);
	void setDifficulty(size_t difficulty);
	
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
	
	std::string getLabel();
	std::string getStyle();
	size_t getDifficulty();
};

#endif
