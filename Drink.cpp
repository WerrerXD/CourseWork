#include "Drink.h"

Drink::Drink(string name_, double price_): Food(price_, 0), nameofdrink(name_) {}

string Drink::getnameofdrink() {
	return nameofdrink;
}

void Drink::setvolume() {
	cout << "Выберите размер: 1. Большой - 500мл 2. Обычный - 250мл" << endl;
	int k;
	cin >> k;
	volume = k;
	if (k == 1) price *= 1.5;
	system("cls");
}

void Drink::setprice(double price) {
	this->price = price;
}