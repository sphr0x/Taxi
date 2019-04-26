#include "UI.h"
#include "Taxi.h"

void UI::printMenu()const {												// 3 a+b)
	std::cout << "\n\t\t\t__/ Bitte Aktion via Nummerierung waehlen : \n\n" << "\t\t\t1 : Fahrt mit Fahrgast verbuchen\n";
	std::cout << "\t\t\t2 : Fahrt ohne Fahrgast verbuchen\n" << "\t\t\t3 : Tanken\n";
	std::cout << "\t\t\t4 : Taxistatus ausgeben\n" << "\t\t\t5 : Beenden\n";
	std::cout << "\t\t\t6 : Bildschirm bereinigen & Menu erneut zeigen" << std::endl;
}
int UI::chooseTaxi() {													// 3 a+b)
	int choose;

	std::cout << "\t\t\tBitte Taxi waehlen: ( 1 oder 2 )" << std::endl;
	while (1) {
		std::cout << "\t";
		std::cin >> choose;
		if ((choose == 1) || (choose == 2)) {
			return choose;
		}
		else {
			std::cout << "\t\t\tFehler: Bitte 1 oder 2 waehlen!" << std::endl;
		}
	}
};
void UI::getAll(Taxi &car1, Taxi &car2) {								// 2 b) -> 3 a+b)
	int choose;
	double distance;
	
	while (1) {
		std::cout << "\t";
		std::cin >> choose;
		switch (choose) {
		case 1:
			std::cout << "\t\t\tGewuenschte Reisestrecke eingeben ( in km ):" << std::endl;
			std::cout << "\t";
			std::cin >> distance;
			if (chooseTaxi() == 1) {
				car1.bookTrip(1, distance);
			}
			else{
				car2.bookTrip(1, distance);
			}
			break;
		case 2:
			std::cout << "\t\t\tGewuenschte Reisestrecke eingeben ( in km ):" << std::endl;
			std::cout << "\t";
			std::cin >> distance;
			if (chooseTaxi() == 1) {
				car1.bookTrip(0, distance);
			}
			else {
				car2.bookTrip(0, distance);
			}
			break;
		case 3:
			if (chooseTaxi() == 1) {
				car1.fillUp();
			}
			else{
				car2.fillUp();
			}
			break;
		case 4:
			if (chooseTaxi() == 1) {
				std::cout << car1.toString() << std::endl;
			}
			else {
				std::cout << car2.toString() << std::endl;
			}
			break;
		case 5:
			std::cout << "\t\t\t\t\t\tBeende Programm!" << std::endl;
			return;
		case 6:		
			system("cls");			// da curses.h / conio.h nicht existent
			std::cout << "\n\n\t\t\tBildschrim bereinigt! ( Taxidaten sind gespeichert )\n\n" << std::endl;
			UI::printMenu();
			break;
		default:
			std::cout << "\t\t\tFehler: Bitte 1-6 waehlen!" << std::endl;
			break;
		}
	}
};
UI::UI()
{
}
UI::~UI()
{
}
