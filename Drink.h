#pragma once
#include "Food.h"
class Drink : public Food {
	int volume;
	string nameofdrink;
public:
	Drink(string, double);
	string getnameofdrink();
	void setvolume();
	void setprice(double);
};

