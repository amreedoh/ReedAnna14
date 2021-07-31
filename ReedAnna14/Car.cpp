/*
Anna Reed
7/30/2021
CIS 1202
*/


#include "Vehicle.h"
#include "Car.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;




int Car::getDoors() { //setter
	return doors;
}
void Car::setDoors(int doorNum) { //getter
	doors = doorNum;
}

//display information
void Car::displayInfo() {
	Vehicle::displayInfo();
	cout << setw(14) << "Doors: " << doors << endl;
}