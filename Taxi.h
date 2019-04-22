#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

class Taxi															// 1 a)
{
private:
	double m_mileageDAY;
	double m_fuelACT;
	double m_fuelMAX;
	double m_consumpKM;
	double m_costKM;
	double m_balance;

public:
	void initialize(double fuelM, double consump = 0.0, double price = 0.0);
	void bookTrip(char t, double distance = 0.0);
	void fillUp(double fPrice = rand() % 130 + 165);
	std::string toString();

	Taxi();
	~Taxi();
};

