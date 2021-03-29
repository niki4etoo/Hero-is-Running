#ifndef SCORE_H_
#define SCORE_H_

#include <cstddef>

class Score {
	size_t initPoints;
	size_t currentPoints;
	size_t points;
	float factor;
public:
	Score(size_t initPoints);
	~Score(){};
	void setInitPoints(size_t points);
	void setCurrentPoints(size_t points);
	void setFactorPoints(float factor);
	void setPoints(size_t points);
	size_t getInitPoints();
	size_t getCurrentPoints();
	float getFactorPoints();
	size_t getPoints();
};

#endif
