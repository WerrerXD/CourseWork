#include "Courier.h"

Courier::Courier(): Delivery() {}

void Courier::deliver(int orderID, string name) {
	cout << "������� ����� �� ������� ����� ���������" << endl;
	cin >> address;
	this->name = name;
	this->orderID = orderID;
	system("cls");
	cout << "������� ���� �������� ���� ��� � ����� ������, ��������" << endl;
}

