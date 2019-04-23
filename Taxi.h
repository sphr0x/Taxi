#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

class Taxi																			// 1 a)
{
private:
	double m_mileageDAY;
	double m_fuelACT;
	const double m_fuelMAX = 75.0;
	const double m_consumpKM = 7.2 / 100;
	const double m_costKM = 0.7;
	double m_balance;
public:
	// void initialize(double fuelM, double consump = 0.0, double price = 0.0);
	void bookTrip(char t, double distance = 0.0);
	void fillUp(double fPrice = std::rand() % 35 + 130);
	std::string toString();

	Taxi(/*double fuelMax, double consump, double price*/);							// 4 a+b)
	Taxi(const Taxi &car);														// 4 b)
	~Taxi();
};

