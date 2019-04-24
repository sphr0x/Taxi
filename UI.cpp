#include "UI.h"
#include "Taxi.h"

void UI::printMenu() {
	std::cout << "Bitte Aktion via Nummerierung waehlen :\n" << "1 : Fahrt mit Fahrgast verbuchen\n";
	std::cout << "2 : Fahrt ohne Fahrgast verbuchen\n" << "3 : Tanken\n";
	std::cout << "4 : Taxistatus ausgeben\n" << "5 : Beenden"<< std::endl;
}
Taxi UI::chooseTaxi() {
	int choose;

	std::cout << "Bitte Taxi waehlen: ( 1 oder 2 )" << std::endl;
	while (1) {
		std::cin >> choose;
		if (choose == 1){
			// getTaxi.initialize(75, 7.2, 0.7);
			Taxi getTaxi(75, 7.2, 0.7);											// 4 a) 
			return getTaxi;
		}
		else if (choose == 2){
			// getTaxi.initialize(90, 12.5, 0.95);
			Taxi getTaxi(90, 12.5, 0.95);										// 4 a) 
			return getTaxi;
		}
		else{
			std::cout << "Fehler: Bitte 1 oder 2 waehlen!" << std::endl;
		}
	}
}

Taxi UI::chooseTaxi2(Taxi &car1, Taxi &car2) {
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
};

void UI::getAll(Taxi &getValue) {
	int choose;
	double distance;

	while (1) {											
		std::cin >> choose;
		switch (choose) {
		case 1:
			std::cout << "Gewuenschte Reisestrecke eingeben ( in km ):" << std::endl;
			std::cin >> distance;
			getValue.bookTrip(1, distance);
			break;
		case 2:
			std::cout << "Gewuenschte Reisestrecke eingeben ( in km ):" << std::endl;
			std::cin >> distance;
			getValue.bookTrip(0, distance);
			break;
		case 3:
			getValue.fillUp();
			break;
		case 4:
			printDay(getValue);
			break;
		case 5:
			std::cout << "Beende Programm!" << std::endl;
			return;
		default:
			std::cout << "Fehler: Bitte 1-5 waehlen!" << std::endl;
			break;
		}
	}
}
void UI::getAll2(Taxi &car1, Taxi &car2) {
	int choose;
	double distance;
	UI car;

	while (1) {
		std::cin >> choose;
		switch (choose) {
		case 1:
			car.chooseTaxi2(car1, car2);
			std::cout << "Gewuenschte Reisestrecke eingeben ( in km ):" << std::endl;
			std::cin >> distance;
			/*    wie zugriff bzw speicherung auf in main initialisierte objekte car1/car2 ?  ptr ?   */
			// hier anpassen
			car.bookTrip(1, distance);
			break;
		case 2:
			car.chooseTaxi2(car1, car2);
			std::cout << "Gewuenschte Reisestrecke eingeben ( in km ):" << std::endl;
			std::cin >> distance;
			// hier anpassen
			car.bookTrip(0, distance);
			break;
		case 3:
			car.chooseTaxi2(car1, car2);
			// hier anpassen
			car.fillUp();
			break;
		case 4:
			car.chooseTaxi2(car1, car2);
			// hier anpassen
			printDay(car);
			break;
		case 5:
			std::cout << "Beende Programm!" << std::endl;
			return;
		default:
			std::cout << "Fehler: Bitte 1-5 waehlen!" << std::endl;
			break;
		}
	}
};
void UI::printDay(Taxi &Print) const{
	std::cout << Print.toString() << std::endl;
}
UI::UI()
{
}
UI::~UI()
{
}
