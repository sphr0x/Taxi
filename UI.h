#pragma once
#include "Taxi.h"

class UI											// 2 a)
{
public:
	void printMenu()const;							// 4 c)
	int chooseTaxi();
	void getAll(Taxi &car1, Taxi &car2);
	int checkInput(int choose);
	double checkDist(double distance);
	UI();
	~UI();
};

