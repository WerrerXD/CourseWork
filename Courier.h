#pragma once
#include "Delivery.h"

class Courier : public Delivery {
	string name;
	string address;
	int orderID;
public:
	void deliver(int, string);
	Courier();
};

