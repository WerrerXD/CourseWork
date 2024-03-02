#include "Food.h"

Food::Food(double price_, double time_) : price(price_), time(time_) {}

double Food::getprice() {
	return price;
}

double Food::gettime() {
	return time;
}

