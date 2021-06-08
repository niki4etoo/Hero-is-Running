#include <stdio.h>
#include <cstddef>

class RiskManagement {
	size_t degree;
	size_t frequency;
public:
	RiskManagement();
	~RiskManagement();
	
	//Setters
	void setDegree(size_t degree);
	void setFrequency(size_t frequency);
	
	//Getters
	size_t getDegree();
	size_t getFrequency();

};
