#pragma once
#include "Taxi.h"

class UI											// 2 a)
{
public:
	void printMenu();
	Taxi chooseTaxi();
	Taxi chooseTaxi2(Taxi &car1, Taxi &car2);
	void getAll(Taxi &getValue);
	void getAll2(Taxi &car1, Taxi &car2);
	void printDay(Taxi &Print)const;				// 4 c) read-only = const

	UI();
	~UI();
};

