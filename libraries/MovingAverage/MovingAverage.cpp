#include "MovingAverage.h"

void MovingAverage::reset(float x){
	mean = x;
}

MovingAverage::MovingAverage(float conservation){
	reset(0.0);
	if(conservation<1.0)
		cons = conservation;
	else
		cons = 0.99;
}

float MovingAverage::measure(float x){
	mean = mean*cons + x*(1.0-cons);
	return mean;
}

MovingAverage::~MovingAverage(){

}