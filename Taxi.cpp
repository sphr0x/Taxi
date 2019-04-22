#include <iostream>
#include "Taxi.h"
#include <cstdlib>									// rand() fkt

void Taxi::initialize(double fuelM, double consump, double price) {
	Taxi init;
	init.m_consumpKM = consump/100;
	init.m_costKM = price;
	init.m_fuelMAX = fuelM;
	init.m_mileageDAY = 0.0;
	init.m_fuelACT = m_fuelMAX;
	init.m_balance = 0.0;
}
void Taxi::bookTrip(char t, double distance) {
	double fuelR = rand() % 130 + 165;

	if (m_fuelACT >= (m_consumpKM*distance))
	{
		m_mileageDAY += distance;
		m_fuelACT -= (m_consumpKM*distance);
	}
	else {
		std::cout << "Tankfuellung nicht ausreichend!" << std::endl;
	}
	if (t == 'y') {
		m_balance += (distance * m_costKM);
	}
	else if(t == 'n'){															
		m_balance -= (distance * m_consumpKM * (fuelR/100));
	}
	else {
		std::cout << "Fehler!" << std::endl;
	}
}
void Taxi::fillUp(double fPrice ) {
	if ((m_balance >= ((fPrice/100)*(m_fuelMAX - m_fuelACT))) >= 0) {
		m_fuelACT = m_fuelMAX;
		m_balance -= (fPrice/100) * (m_fuelMAX - m_fuelACT);
	}
	else {
		std::cout << "Unzureichende Finanzmittel!" << std::endl;
	}
}
std::string Taxi::toString() {
	return "Tageskilometerstand: " + std::to_string(m_mileageDAY) + "\nTankinhalt: " + std::to_string(m_fuelACT)
		+ "\nGeldbilanz: " + std::to_string(m_balance);
}

Taxi::Taxi()
{
}


Taxi::~Taxi()
{
}
