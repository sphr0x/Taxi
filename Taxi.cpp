#include <iostream>
#include "Taxi.h"
#include <cstdlib>												// rand() fkt
/*
void Taxi::initialize(double fuelM, double consump, double price) {
	m_consumpKM = consump/100;
	m_costKM = price;
	m_fuelMAX = fuelM;
	m_mileageDAY = 0.0;
	m_fuelACT = m_fuelMAX;
	m_balance = 0.0;
}
*/
void Taxi::bookTrip(char t, double distance) {					// statt char - bool !
	double fuelR = std::rand() % 35 + 130;						// random number from 130 - 165

	if (m_fuelACT >= (m_consumpKM*distance))
	{
		m_mileageDAY += distance;
		m_fuelACT -= (m_consumpKM*distance);
		if (t == 'y') {
			m_balance += ((distance * m_costKM) - (distance * m_consumpKM * (fuelR / 100)));
			std::cout << "Gebucht mit Fahrgast!" << std::endl;
		}
		else if (t == 'n') {
			m_balance -= (distance * m_consumpKM * (fuelR / 100));
			std::cout << "Gebucht ohne Fahrgast!" << std::endl;
		}
	}
	else {
		std::cout << "Fehler: Tankfuellung nicht ausreichend!" << std::endl;
	}
}
void Taxi::fillUp(double fPrice ) {
	if (m_fuelACT == m_fuelMAX) {
		std::cout << "Fehler: Tank voll!" << std::endl;
	}
	else if ((m_balance >= ((fPrice/100)*(m_fuelMAX - m_fuelACT)))) {
		m_balance -= (fPrice/100) * (m_fuelMAX - m_fuelACT);
		m_fuelACT = m_fuelMAX;
		std::cout << "Aufgetankt!" << std::endl;
	}
	else {
		std::cout << "Fehler: Unzureichende Finanzmittel!" << std::endl;
	}
}
std::string Taxi::toString() {
	return "Tageskilometerstand: " + std::to_string(m_mileageDAY) + "\nTankinhalt: " + std::to_string(m_fuelACT)
		+ "\nGeldbilanz: " + std::to_string(m_balance);
}
Taxi::Taxi()								// 4 a+b)
	: m_mileageDAY(0.0), m_fuelACT(m_fuelMAX), m_balance(0.0){
}
Taxi::Taxi(const Taxi &car)																// 4 b) | copy-constructor
	:m_consumpKM(12.5 / 100), m_costKM(0.95), m_fuelMAX(90), m_mileageDAY(0.0), m_fuelACT(m_fuelMAX),
	m_balance(0.0) {
}
Taxi::~Taxi(){
}
