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
void Taxi::bookTrip(bool guest, double distance) {
	double fuelR = std::rand() % 35 + 130;						// random number from 130 - 165
														
	if ((m_fuelACT >= (m_consumpKM*distance)) && (distance >= 0)){
		m_mileageDAY += distance;
		m_fuelACT -= (m_consumpKM*distance);
		if (guest == 1) {
			m_balance += (distance * m_costKM);
			std::cout << "Gebucht mit Fahrgast!" << std::endl;
		}
		else if (guest == 0) {
			std::cout << "Gebucht ohne Fahrgast!" << std::endl;
		}
	}
	else if (distance < 0) {
		std::cout << "Fehler: Reisestrecke im negativen Bereich !" << std::endl;
		std::cout << "Achtung: Bitte neue Aktion waehlen !" << std::endl;
		return;
	}
	else {
		std::cout << "Fehler: Tankfuellung nicht ausreichend!" << std::endl;
		std::cout << "Achtung: Bitte neue Aktion waehlen !" << std::endl;
		return;
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
std::string Taxi::toString()const {
	return "Tageskilometerstand: " + std::to_string(m_mileageDAY) + "\nTankinhalt: " + std::to_string(m_fuelACT)
		+ "\nGeldbilanz: " + std::to_string(m_balance);
}
Taxi::Taxi(double fuelMax, double consump, double price)
	:m_consumpKM(consump / 100), m_costKM(price), m_fuelMAX(fuelMax), m_mileageDAY(0.0), m_fuelACT(fuelMax),
	m_balance(0.0) {
}
Taxi::Taxi(const Taxi &input) :m_consumpKM(input.m_consumpKM), m_costKM(input.m_costKM), m_fuelMAX(input.m_fuelMAX), m_mileageDAY(0.0), m_fuelACT(input.m_fuelMAX),
m_balance(0.0) {
}
Taxi::~Taxi(){
}
/*
Taxi Taxi::chooseTaxi2(Taxi &car1, Taxi &car2) {
	int choose;

	std::cout << "Bitte Taxi waehlen: ( 1 oder 2 )" << std::endl;
	while (1) {
		std::cin >> choose;
		if (choose == 1) {
			// getTaxi.initialize(75, 7.2, 0.7);										
			return car1;
		}
		else if (choose == 2) {
			// getTaxi.initialize(90, 12.5, 0.95);
			return car2;
		}
		else {
			std::cout << "Fehler: Bitte 1 oder 2 waehlen!" << std::endl;
		}
	}
}; */