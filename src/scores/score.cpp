#include "../../include/scores/score.h"

Score::Score(size_t initPoints) {
	this->initPoints = initPoints;
}

void Score::setInitPoints(size_t points){
	this->initPoints = points;
}

void Score::setCurrentPoints(size_t points){
	this->currentPoints = points;
}

void Score::setFactorPoints(float factor){
	this->factor = factor;
}

void Score::setPoints(size_t points){
	this->points = points;
}

size_t Score::getInitPoints(){
	return this->initPoints;
}

size_t Score::getCurrentPoints(){
	return this->currentPoints;
}

float Score::getFactorPoints(){
	return this->factor;
}

size_t Score::getPoints(){
	return this->points;
}
