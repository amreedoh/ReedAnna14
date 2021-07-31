/*
Anna Reed
7/30/2021
CIS 1202
*/

#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {

protected:
	string manufacturer;
	int year;

public:
	//constructor
	Vehicle() {
		manufacturer = "";
		year = 0;
	}
	Vehicle(string manu, int yr) {
		manufacturer = manu;
		year = yr;
	}

	string getManufacturer(); //getter
	void setManufacturer(string); //setter

	int getYear(); //getter
	void setYear(int);//setter

	void displayInfo();//display information

};
#endif // !VEHICLE_H
