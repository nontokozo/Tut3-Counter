#include <iostream>
#include "UpDownCounter.h"
using namespace std;

int main()
{
	UpDownCounter counter1();// default constructor
	UpDownCounter counter2(20, 210, 3, 3);
	counter2++;
	++counter2;
	--counter2;;
	counter2--;

	std::cout << "value of counter2 is:" << counter2.getvalue();
	system ("pause");
     return 0;
}