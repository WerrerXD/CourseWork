#include "Pizza.h"

Pizza::Pizza(double price_, string name_) : Food(price_, 15), nameofpizza(name_) {}


void Pizza::setsize() {
	cout << "Выберите размер: 1. Большая - 45см 2. Средняя - 30см 3. Маленькая - 15см" << endl;
	int k;
	cin >> k;
	size = k;
	if (k == 1) price *= 1.5;
	if (k == 3) price /= 1.5;
	system("cls");
}

void Pizza::setprice(double price) {
	this->price = price;
}

string Pizza::getnameofpizza() {
	return nameofpizza;
}
