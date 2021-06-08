#include "../../include/risk/risk_management.h"

//Setters
void RiskManagement::setDegree(size_t degree){
	this->degree = degree;
}

void RiskManagement::setFrequency(size_t frequency){
	this->frequency = frequency;
}

//Getters
size_t RiskManagement::getDegree(){
	return this->degree;
}

size_t RiskManagement::getFrequency(){
	return this->frequency;
}
