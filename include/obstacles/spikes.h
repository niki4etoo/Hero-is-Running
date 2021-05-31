#ifndef SPIKES_H_
#define SPIKES_H_

#include <cstddef>
#include <string>

class Spikes {
	std::string type;
	size_t width, height;
	size_t count;
	size_t posX, posY;
	//To do ( Texture load of spike )
	bool isMovable = false;
public:
	Spikes(){};
	~Spikes(){};
	
	//Setters
	void setType(std::string type);
	void setWidth(size_t width);
	void setHeight(size_t height);
	void setCount(size_t count);
	void setPosX(size_t posX);
	void setPosY(size_t posY);
	
	void setIsMovable(bool isMovable);
	
	//Getters
	std::string getType();
	size_t getWidth();
	size_t getHeight();
	size_t getCount();
	size_t getPosX();
	size_t getPosY();
	
	bool getIsMovable();
};

#endif
