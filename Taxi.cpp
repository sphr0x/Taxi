#include <iostream>
#include "Taxi.h"
#include <cstdlib>														// rand() fkt
/*
void Taxi::initialize(double fuelM, double consump, double price) {		// 1 a)
	m_consumpKM = consump/100;
	m_costKM = price;
	m_fuelMAX = fuelM;
	m_mileageDAY = 0.0;
	m_fuelACT = m_fuelMAX;
	m_balance = 0.0;
}
*/
void Taxi::bookTrip(bool guest, double distance) {						// 1 a)
	double fuelR = std::rand() % 35 + 130;								// random number from 130 - 165
														
	if ((m_fuelACT >= (m_consumpKM*distance)) && (distance >= 0)){
		m_mileageDAY += distance;
		m_fuelACT -= (m_consumpKM*distance);
		if (guest == 1) {
			m_balance += (distance * m_costKM);
			std::cout << "\t\t\tGebucht mit Fahrgast!" << std::endl;
		}
		else if (guest == 0) {
			std::cout << "\t\t\tGebucht ohne Fahrgast!" << std::endl;
		}
	}
	else if (distance < 0) {
		std::cout << "\t\t\tFehler: Reisestrecke im negativen Bereich !" << std::endl;
		std::cout << "\t\t\tAchtung: Bitte neue Aktion waehlen !" << std::endl;
		return;
	}
	else {
		std::cout << "\t\t\tFehler: Tankfuellung nicht ausreichend!" << std::endl;
		std::cout << "\t\t\tAchtung: Bitte neue Aktion waehlen !" << std::endl;
		return;
	}
}
void Taxi::fillUp(double fPrice ) {										// 1 a)
	if (m_fuelACT == m_fuelMAX) {
		std::cout << "\t\t\tFehler: Tank voll!" << std::endl;
	}
	else if ((m_balance >= ((fPrice/100)*(m_fuelMAX - m_fuelACT)))) {
		m_balance -= (fPrice/100) * (m_fuelMAX - m_fuelACT);
		m_fuelACT = m_fuelMAX;
		std::cout << "\t\t\tAufgetankt!" << std::endl;
	}
	else {
		std::cout << "\t\t\tFehler: Unzureichende Finanzmittel!" << std::endl;
	}
}
std::string Taxi::toString()const {										// 1 a)
	return "\t\t\tTageskilometerstand: " + std::to_string(m_mileageDAY) + "\n\t\t\tTankinhalt: " + std::to_string(m_fuelACT)
		+ "\n\t\t\tGeldbilanz: " + std::to_string(m_balance);
}
Taxi::Taxi(double fuelMax, double consump, double price)
	:m_consumpKM(consump / 100), m_costKM(price), m_fuelMAX(fuelMax), m_mileageDAY(0.0), m_fuelACT(fuelMax),
	m_balance(0.0) {
}
Taxi::Taxi(const Taxi &input) 
	:m_consumpKM(input.m_consumpKM), m_costKM(input.m_costKM), m_fuelMAX(input.m_fuelMAX), m_mileageDAY(0.0), m_fuelACT(input.m_fuelMAX),
	m_balance(0.0) {
}
Taxi::~Taxi(){
}