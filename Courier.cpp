#include "Courier.h"

Courier::Courier(): Delivery() {}

void Courier::deliver(int orderID, string name) {
	cout << "¬ведите адрес на который нужно доставить" << endl;
	cin >> address;
	this->name = name;
	this->orderID = orderID;
	system("cls");
	cout << " урьеру было передано ваше им€ и номер заказа, ожидайте" << endl;
}

