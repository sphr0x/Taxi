#include "Taxi.h"
#include <iostream>
#include "UI.h"

		/* ### C23 – Laborübung 2 - Konstruktoren im angewandten Beispiel: Taxiunternehmen ### */

int main()
{	
	UI program;
	Taxi car1(75, 7.2, 0.7);				// 2 b)
	Taxi car2 = Taxi(90, 12.5, 0.95);

	program.printMenu();
	program.getAll(car1,car2);
	return 0;
}
