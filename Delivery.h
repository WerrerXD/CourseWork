#pragma once
#include "Order.h"
#include <vector>
class Delivery {
	int typeofdelivery;
	vector<string> addresses;
public:
	void deliver(string, int);
	void fullfilladdresses();
	Delivery();
};
