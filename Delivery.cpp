#include "Delivery.h"
#include "Courier.h"
void Delivery::deliver(string name, int orderID) {
	cout << "Выберите способ доставки: 1. Доставка на адрес 2. Самовывоз" << endl;
	cin >> typeofdelivery;
	system("cls");
	if (typeofdelivery == 1) {
		Courier courier;
		courier.deliver(orderID, name);
	}
	if (typeofdelivery == 2) {
		this->fullfilladdresses();
		cout << "Выберите адрес пиццерии: ";
		for (int i = 0; i < addresses.size(); i++) {
			cout << i + 1 << ". " << addresses[i] << " ";
		}
		cout << endl;
		int h;
		cin >> h;
		system("cls");
		cout << "Будем ждать вас по адресу " << addresses[h - 1] << endl;
		cout << "Номер вашего заказа: " << orderID << endl;
	}
}

void Delivery::fullfilladdresses() {
	addresses.push_back("Машерова, 15");
	addresses.push_back("Притыцкого, 23");
	addresses.push_back("Партизанский проспект, 112");
	addresses.push_back("Независимости проспект, 1");
	addresses.push_back("Пушкина, 21");
}

Delivery::Delivery() {}