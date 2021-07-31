/*
Anna Reed
7/30/2021
CIS 1202
*/

#include "Vehicle.h"
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;



//manufacturer
string Vehicle::getManufacturer() { //getter
	return manufacturer;
}
void Vehicle::setManufacturer(string manu) { //setter
	manufacturer = manu;
}

//year
int Vehicle::getYear() { //getter
	return year;
}
void Vehicle::setYear(int yr) { //setter
	year = yr;
}

//display information
void Vehicle::displayInfo() { 
	cout << setw(14) << "Manufacturer: " << manufacturer << endl
		<< setw(14) << "Year: " << year << endl;
}