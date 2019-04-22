#include "Taxi.h"
#include <iostream>
#include "UI.h"

int main()
{
	Taxi car1,car2;
	char g ='y';
	char ng = 'n';
	int distA = 10;
	int distB = 20;

	car1.initialize(75,7.2,0.7);
	car1.bookTrip(g);
	std::cout << car1.toString() << std::endl;
	car2.initialize(90,12.5,0.95);
	car2.bookTrip(ng);
	std::cout << car2.toString() << std::endl;
	car1.fillUp();
	std::cout << car1.toString() << std::endl;

					

	return 0;
}
