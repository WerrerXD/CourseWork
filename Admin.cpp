#include "Admin.h"

Admin::Admin(string a, string b) : User(a, b) {}

void Admin::adminMenu() {
	int choice = 0;
	Order order;
	order.fulfillPizzas();
	order.fulfillDrinks();
	while (choice != 7) {
		cout << "Меню админа:" << endl;
		cout << "1. Добавить админа" << endl;
		cout << "2. Добавить пиццу в меню" << endl;
		cout << "3. Добавить напиток в меню" << endl;
		cout << "4. Изменить стоимость пиццы" << endl;
		cout << "5. Изменить стоимость напитка" << endl;
		cout << "6. Просмотреть меню пицц и напитков" << endl;
		cout << "7. Выйти из меню" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			system("cls");
			this->addAdmin();
			break;
		case 2:
			system("cls");
			this->addPizza(order);
			break;
		case 3:
			system("cls");
			this->addDrink(order);
			break;
		case 4:
			system("cls");
			this->changePizza(order);
			break;
		case 5:
			system("cls");
			this->changeDrink(order);
			break;
		case 6:
			system("cls");
			this->showMenu(order);
			break;
		default:
		case 7:
			return;
		}
	}
}

void Admin::showMenu(Order& order) {
	order.getMenu();
}

void Admin::addAdmin() {
	cout << "Введите логин и пароль админа" << endl;
	string log, pass;
	cin >> log >> pass;
	ofstream file("admins.txt", ios::app);
	file << log << " " << pass << " ";
	file.close();
	cout << "Вы добавили админа" << endl;
}

void Admin::addPizza(Order& order) {
	cout << "Введите название и цену пиццы" << endl;
	string name;
	double price;
	cin >> name >> price;
	order.addPizzaMenu(name, price);
}

void Admin::addDrink(Order& order) {
	cout << "Введите название и цену напитка" << endl;
	string name;
	double price;
	cin >> name >> price;
	order.addDrinkMenu(name, price);
}

void Admin::changePizza(Order& order) {
	cout << "Введите название и новую цену пиццы" << endl;
	string name;
	double price;
	cin >> name >> price;
	order.changePizza(name, price);
}

void Admin::changeDrink(Order& order) {
	cout << "Введите название и новую цену напитка" << endl;
	string name;
	double price;
	cin >> name >> price;
	order.changeDrink(name, price);
}