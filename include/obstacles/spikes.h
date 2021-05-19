#ifndef SPIKES_H_
#define SPIKES_H_

#include <cstddef>
#include <string>

class Spikes {
	std::string type;
	size_t width, height;
	//To do ( Texture load of spike )
public:
	Spikes(){};
	~Spikes(){};
	
	//Setters
	void setType(std::string type);
	void setWidth(size_t width);
	void setHeight(size_t height);
	
	//Getters
	std::string getType();
	size_t getWidth();
	size_t getHeight();
};

#endif
