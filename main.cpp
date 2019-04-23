#include "Taxi.h"
#include <iostream>
#include "UI.h"

		/* ### C23 – Laborübung 2 - Konstruktoren im angewandten Beispiel: Taxiunternehmen ### */

int main()
{	/*
	Taxi car1,car2;
	char g ='y';				
	char ng = 'n';
	int distA = 10;
	int distB = 20;
	*/
	Taxi car = Taxi(75, 7.2, 0.7);
	Taxi &rC = car;
	UI get;
	/*
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
	std::cout << car2.toString() << std::endl;			// ...2 b)
	*/			
	get.chooseTaxi();								// 3 a+b)...
	get.printMenu();
	get.getAll(car);									// ...3 a+b)

	return 0;
}
