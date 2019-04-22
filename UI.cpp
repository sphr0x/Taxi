#include "UI.h"
#include "Taxi.h"

void UI::printMenu() {
	std::cout << "Bitte Aktion via Nummerierung waehlen :\n" << "1 : Fahrt mit Fahrgast verbuchen\n";
	std::cout << "2 : Fahrt ohne Fahrgast verbuchen\n" << "3 : Tanken\n";
	std::cout << "4 : Taxistatus ausgeben\n" << "5 : Beenden"<< std::endl;
}

void UI::printTaxi() {
	std::cout << "Bitte Taxi waehlen: ( 1 oder 2 )" << std::endl;
}

Taxi UI::chooseTaxi() {
	Taxi getTaxi;
	int choose;

	while (1) {
		std::cin >> choose;
		if (choose == 1){
			getTaxi.initialize(75, 7.2, 0.7);
			break;
		}
		else if (choose == 2){
			getTaxi.initialize(90, 12.5, 0.95);
			break;
		}
		else{
			std::cout << "Error: Bitte 1 oder 2 waehlen!" << std::endl;
		}
	}
	return getTaxi;
}

void UI::getAll(Taxi getValue) {
	int choose;

	while (1) {											// hier fehler - kein fkt aufruf bzw bearbeitung
		std::cin >> choose;
		switch (choose) {
		case 1:
			getValue.bookTrip('y', 100);
			break;
		case 2:
			getValue.bookTrip('n', 100);
			break;
		case 3:
			getValue.fillUp();
			break;
		case 4:
			getValue.toString();
			break;
		case 5:
			break;
		default:
			std::cout << "Bitte 1-5 waehlen!" << std::endl;
			break;
		}
	}


	/*
	getValue.initialize();
	getValue.bookTrip();
	getValue.fillUp();
	*/
};

void UI::printDay(Taxi Print) {
	std::cout << Print.toString() << std::endl;
};

UI::UI()
{
}


UI::~UI()
{
}
