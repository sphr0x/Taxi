#include "Taxi.h"
#include <iostream>
#include "UI.h"

		/* ### C23 – Laborübung 2 - Konstruktoren im angewandten Beispiel: Taxiunternehmen ### */

int main()
{	/*
	UI get;
	Taxi car(get.chooseTaxi());							// taxi-objekt(UI-objekt.objektfkt(gibt taxi-objekt zurück)) 
	get.printMenu();
	get.getAll(car);	
	*/

	UI get2;
	Taxi car1(75, 7.2, 0.7);
	Taxi car2(90, 12.5, 0.95);
	get2.printMenu();
	get2.getAll2(car1,car2);

	return 0;
}
