#include "Delivery.h"
#include "Courier.h"
void Delivery::deliver(string name, int orderID) {
	cout << "�������� ������ ��������: 1. �������� �� ����� 2. ���������" << endl;
	cin >> typeofdelivery;
	system("cls");
	if (typeofdelivery == 1) {
		Courier courier;
		courier.deliver(orderID, name);
	}
	if (typeofdelivery == 2) {
		this->fullfilladdresses();
		cout << "�������� ����� ��������: ";
		for (int i = 0; i < addresses.size(); i++) {
			cout << i + 1 << ". " << addresses[i] << " ";
		}
		cout << endl;
		int h;
		cin >> h;
		system("cls");
		cout << "����� ����� ��� �� ������ " << addresses[h - 1] << endl;
		cout << "����� ������ ������: " << orderID << endl;
	}
}

void Delivery::fullfilladdresses() {
	addresses.push_back("��������, 15");
	addresses.push_back("����������, 23");
	addresses.push_back("������������ ��������, 112");
	addresses.push_back("������������� ��������, 1");
	addresses.push_back("�������, 21");
}

Delivery::Delivery() {}