/*
Anna Reed
7/30/2021
CIS 1202
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "Vehicle.h"
#include "Truck.h"
#include "Car.h"

using namespace std;

int main() {

	string manu;
	int year, doors;
	double towCap;

	cout << "Vehicle Information\nEnter Manufacturer: ";
	cin >> manu;
	cout << "Enter Year: ";
	cin >> year;
	cout << "\nVehicle Information\n";
	Vehicle vehicle(manu, year);
	vehicle.displayInfo();

	cout << "\n\nCar Information\nEnter Manufacturer: ";
	cin >> manu;
	cout << "Enter Year: ";
	cin >> year;
	cout << "Enter Doors: ";
	cin >> doors;
	cout << "\nCar Information\n";
	Car car(manu, year, doors);
	car.displayInfo();

	cout << "\n\nTruck Information\nEnter Manufacturer: ";
	cin >> manu;
	cout << "Enter Year: ";
	cin >> year;
	cout << "Enter Tow Capacity: ";
	cin >> towCap;
	cout << "\nTruck Information\n";
	Truck truck(manu, year, towCap);
	truck.displayInfo();

	return 0;
}