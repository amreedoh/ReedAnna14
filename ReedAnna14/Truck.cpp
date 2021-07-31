/*
Anna Reed
7/30/2021
CIS 1202
*/

#include "Vehicle.h"
#include "Truck.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;





double Truck::getTow() { //setter
	return towCapacity;
}
void Truck::setTow(double tow) { //getter
	towCapacity = tow;
}

//display information
void Truck::displayInfo() {
	Vehicle::displayInfo();
	cout << setw(14) << "Tow Capacity: " << towCapacity << endl;
}