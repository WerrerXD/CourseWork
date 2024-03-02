#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;
class Payment{
	int paymethod;
	double change;
	string card;
public:
	Payment();
	void setPayment(double);
};

