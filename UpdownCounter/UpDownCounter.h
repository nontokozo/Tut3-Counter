#ifndef UPDOWNCOUNTER_H
#define UPDOWNCOUNTER_H

class UpDownCounter
{
public:
	UpDownCounter(); // default constructor
	UpDownCounter(int,int,int,int); // constructor that we are going to use to store our values
	~UpDownCounter(); // destructor
	int getvalue();
	//operator overloading
	void operator++(); // prefix increment
	void operator++(int); // postfix increment
	void operator--(); // prefix decrement
	void operator--(int); // postfix decrement

private:
	int minValue;
	int maxValue;
	int increment;
	int decrement;
	int currentValue;
};


#endif