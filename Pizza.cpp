#include "Pizza.h"

Pizza::Pizza(double price_, string name_) : Food(price_, 15), nameofpizza(name_) {}


void Pizza::setsize() {
	cout << "�������� ������: 1. ������� - 45�� 2. ������� - 30�� 3. ��������� - 15��" << endl;
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
