/*
Anna Reed
7/30/2021
CIS 1202
*/
#pragma once
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include <string>

using namespace std;

class Car : public Vehicle {

private:
	int doors;

public:
	//constructor
	Car() : Vehicle() {
		doors = 0;
	}
	Car(string manu, int yr, int doorNum) : Vehicle(manu, yr) {
		doors = doorNum;
	}


	int getDoors(); //setter
	void setDoors(int); //getter

	//display information
	void displayInfo();
};
#endif // !CAR_H
