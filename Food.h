#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Food {
protected:
	double price;
	double time;
public:
	Food(double, double);
	double gettime();
	double getprice();
};

