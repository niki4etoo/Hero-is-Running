#ifndef REWARDS_H_
#define REWARDS_H_

#include <string>
#include <cstddef>

class Rewards {
	size_t id;
	size_t type;
	
	std::string name;
public:
	Rewards(){};
	~Rewards(){};

	//Setters
	void setID(size_t id);
	void setType(size_t type);
	void setName(std::string name);
	
	//Getters
	size_t getID();
	size_t getType();
	std::string getName();
};

#endif
