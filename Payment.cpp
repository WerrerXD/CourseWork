#include "Payment.h"
#include <iomanip>

void Payment::setPayment(double priceoforder) {
	cout << "К оплате: " << setprecision(2) << priceoforder << " бун" << endl;
	cout << "Выберете способ оплаты: 1. Картой 2. Наличными" << endl;
	int k;
	cin >> k;
	switch (k) {
	case 1: {
		system("cls");
		cout << "Введите номер карты" << endl;
		cin >> card;
		break;
	}
	case 2: {
		system("cls");
		cout << "У вас со сдачей?(y/n)" << endl;
		char l;
		cin >> l;
		if (l == 'y') {
			system("cls");
			cout << "С какой суммы сдача?" << endl;
			int number;
			cin >> number;
			change = number - priceoforder;
			system("cls");
			cout << "Ваша сдача будет: " << setprecision(2) << change << " бун" << endl;
		}
	}
	}
}

Payment::Payment() {}

