#include "Payment.h"
#include <iomanip>

void Payment::setPayment(double priceoforder) {
	cout << "� ������: " << setprecision(2) << priceoforder << " ���" << endl;
	cout << "�������� ������ ������: 1. ������ 2. ���������" << endl;
	int k;
	cin >> k;
	switch (k) {
	case 1: {
		system("cls");
		cout << "������� ����� �����" << endl;
		cin >> card;
		break;
	}
	case 2: {
		system("cls");
		cout << "� ��� �� ������?(y/n)" << endl;
		char l;
		cin >> l;
		if (l == 'y') {
			system("cls");
			cout << "� ����� ����� �����?" << endl;
			int number;
			cin >> number;
			change = number - priceoforder;
			system("cls");
			cout << "���� ����� �����: " << setprecision(2) << change << " ���" << endl;
		}
	}
	}
}

Payment::Payment() {}

