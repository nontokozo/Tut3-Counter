#include <iostream>
#include "UpDownCounter.h"
using namespace std;

UpDownCounter::UpDownCounter()  // default constructor
{
	minValue = 0; // minimum limit
	maxValue = 255;//maximum limit
	currentValue = 0; // current value of our counter
}

UpDownCounter::UpDownCounter(int min, int max,int decr,int incr)
{
	minValue = min;
	maxValue = max;
	increment = incr;
	decrement = decr;
	currentValue = 0;
}

UpDownCounter::~UpDownCounter()
{

}

int UpDownCounter::getvalue()
{
	return currentValue;
}

void UpDownCounter::operator++() //prefix increment
{
	currentValue += 1;
	if (currentValue>maxValue)
	{
		currentValue = maxValue;
	}
}

void UpDownCounter::operator++(int a) // postfix increment
{
	currentValue += 1;
	if (currentValue>maxValue)
	{
		currentValue = maxValue;
	}
}

void UpDownCounter::operator--() // prefix decrement
{
	currentValue -= 1;
	if (currentValue<minValue)
	{
		currentValue = minValue;
	}
}

void UpDownCounter::operator--(int b) // postfix decrement
{
	currentValue -= 1;
	if (currentValue<minValue)
	{
		currentValue = minValue;
	}
}


