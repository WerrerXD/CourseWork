#pragma once
#include "Food.h"
class Pizza : public Food {
	int size;
	string nameofpizza;
public:
	Pizza(double, string);
	string getnameofpizza();
	void setsize();
	void setprice(double);
};

