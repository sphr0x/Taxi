#pragma once
#include "Taxi.h"

class UI											// 2 a)
{
public:
	Taxi chooseTaxi();
	void printMenu();
	void getAll(Taxi getValue);
	void printDay(Taxi Print);

	UI();
	~UI();
};

