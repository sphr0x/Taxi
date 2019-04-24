#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

class Taxi																			// 1 a)
{
private:
	double m_mileageDAY;
	double m_fuelACT;
	const double m_fuelMAX;
	const double m_consumpKM;
	const double m_costKM;
	double m_balance;
public:
	// void initialize(double fuelM, double consump = 0.0, double price = 0.0);
	void bookTrip(bool guest, double distance = 0.0);
	void fillUp(double fPrice = std::rand() % 35 + 130);
	std::string toString()const;													// 4 c)

	Taxi(double fuelMax, double consump, double price);
	Taxi(const Taxi &input);
	~Taxi();
	// Taxi chooseTaxi2(Taxi &car1, Taxi &car2);
};

