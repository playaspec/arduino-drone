#ifndef MOVING_AVERAGE
#define MOVING_AVERAGE

class MovingAverage
{
private:
	float mean;
	float cons;//conservation factor
public:
	MovingAverage(float conservation = 0.5);
	~MovingAverage();

	void reset(float x);
	float measure(float x);

	/* data */
};

#endif