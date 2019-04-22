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
	UI get;

	car1.initialize(75,7.2,0.7);						// 2 b)...
	std::cout << car1.toString() << std::endl;
	car1.bookTrip(g,100);
	std::cout << car1.toString() << std::endl;
	car1.fillUp();
	std::cout << car1.toString() << std::endl;
	car2.initialize(90,12.5,0.95);
	std::cout << car2.toString() << std::endl;
	car2.bookTrip(ng,200);
	std::cout << car2.toString() << std::endl;
	car2.fillUp();
	std::cout << car2.toString() << std::endl;			// ... 2 b)
					
	get.printTaxi();
	car1 = get.chooseTaxi();
	get.printMenu();
	get.getAll(car1);

	return 0;
}
