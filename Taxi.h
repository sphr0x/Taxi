#pragma once
#include <iostream>
#include <string>
#include <cstdlib>

class Taxi																			// 1 a)
{
private:
	double m_mileageDAY;
	double m_fuelACT;
	const double m_fuelMAX;															// 4 b)
	const double m_consumpKM;														// 4 b)
	const double m_costKM;															// 4 b)
	double m_balance;
public:
	// void initialize(double fuelM, double consump, double price = 0.0);		// 4 a)
	void bookTrip(bool guest, double distance = 0.0);
	void fillUp(double fPrice = std::rand() % 35 + 130);
	std::string toString()const;													// 4 c)

	Taxi(double fuelMax, double consump, double price);								// 4 a)
	Taxi(const Taxi &input);														// 4 a)
	~Taxi();
};

