#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
#include <vector>
#include "User.h"
#include "Admin.h"
#include "Client.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");
	cout << "У вас есть аккаунт?(y/n)" << endl;
	char l;
	cin >> l;
	system("cls");
	cout << "Введите логин и пароль" << endl;
	string login, password;
	cin >> login >> password;
	User user(login, password);
	if (l == 'n') user.registration();
	switch (user.signIn()) {
	case 1: {
		system("cls");
		cout << "Вы зашли как админ" << endl;
		Admin admin(login, password);
		admin.adminMenu();
		break;
	}
	case 2: {
		system("cls");
		cout << "Вы зашли как клиент" << endl;
		Client client(login, password);
		client.clientFunc();
		break;
	}
	default: {
		system("cls");
		cout << "Неверные данные для входа" << endl;
		return 0;
	}
	}
}

