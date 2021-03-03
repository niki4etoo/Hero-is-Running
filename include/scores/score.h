#ifndef SCORE_H_
#define SCORE_H_

#include <cstddef>

class Score {
	size_t initPoints;
	size_t currentPoints;
	float factor;
public:
	Score(size_t initPoints);
	~Score(){};
	void setInitPoints(size_t points);
	void setCurrentPoints(size_t points);
	void setFactorPoints(float factor);
	size_t getInitPoints();
	size_t getCurrentPoints();
	float getFactorPoints();
};

#endif
