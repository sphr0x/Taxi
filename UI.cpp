#include "UI.h"
#include "Taxi.h"

Taxi UI::getAll() {
	Taxi getValue;
	/*
	getValue.initialize();
	getValue.bookTrip();
	getValue.fillUp();
	*/
	return getValue;
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
