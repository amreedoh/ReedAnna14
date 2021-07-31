/*
Anna Reed
7/30/2021
CIS 1202
*/
#pragma once
#ifndef TRUCK_H
#define TRUCK_H

#include <string>
using namespace std;

class Truck : public Vehicle {

private:
	double towCapacity;

public:
	//constructor
	Truck() : Vehicle() {
		towCapacity = 0;
	}
	Truck(string manu, int yr, double tow) : Vehicle(manu, yr) {
		towCapacity = tow;
	}

	double getTow(); //setter
	void setTow(double); //getter

	//display information
	void displayInfo();
};

#endif // !TRUCK_H
