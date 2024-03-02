#include "Order.h"
#include "Pizza.h"
#include "Drink.h"
#include <iomanip>
#include <random>

void Order::getMenu() {
	cout << "Пиццы:" << endl;
	for (int i = 0; i < pizzas.size(); i++) {
		cout << i + 1 << ". " << pizzas[i].getnameofpizza() << " ";
	}
	cout << endl;
	cout << "Напитки:" << endl;
	for (int i = 0; i < drinks.size(); i++) {
		cout << i + 1 << ". " << drinks[i].getnameofdrink() << " ";
	}
	cout << endl;
}

void Order::addPizza() {
	this->fulfillPizzas();
	string choice = "y";
	while (choice != "n") {
		cout << "Какую пиццу вы хотите заказать?" << endl;
		for (int i = 0; i < pizzas.size(); i++) {
			cout << i + 1 << ". " << pizzas[i].getnameofpizza() << " ";
		}
		cout << endl;
		int h;
		cin >> h;
		system("cls");
		pizzas[h - 1].setsize();
		priceoforder += pizzas[h - 1].getprice();
		timeoforder += pizzas[h - 1].gettime();
		cout << "Вы хотите заказать еще пиццу?(y/n)" << endl;
		cin >> choice;
		system("cls");
	}
	system("cls");
}
void Order::addDrink() {
	this->fulfillDrinks();
	cout << "Вы хотите заказать напиток?(y/n)" << endl;
	string d;
	cin >> d;
	system("cls");
	if (d == "y") {
		while (d != "n")
		{
			cout << "Какой напиток вы хотите заказать?" << endl;
			for (int i = 0; i < drinks.size(); i++) {
				cout << i + 1 << ". " << drinks[i].getnameofdrink() << " ";
			}
			cout << endl;
			int m;
			cin >> m;
			system("cls");
			drinks[m - 1].setvolume();
			priceoforder += drinks[m - 1].getprice();
			cout << "Вы хотите заказать еще напиток?(y/n)" << endl;
			cin >> d;
			system("cls");
		}
	}
	this->setID();
	cout << "Ваш заказ будет готов через: " << timeoforder << " минут" << endl;
}

void Order::setName(string name_) {
	name = name_;
}

void Order::fulfillPizzas() {
	pizzas.emplace_back(Pizza (18.5, "Margherita"));
	pizzas.emplace_back(Pizza (16.75, "Pepperoni"));
	pizzas.emplace_back(Pizza (22.25, "Hawaiian"));
	pizzas.emplace_back(Pizza (17.9, "Vegetarian"));
	pizzas.emplace_back(Pizza (19.2, "BBQ Chicken"));
	pizzas.emplace_back(Pizza (24.75, "Supreme"));
	pizzas.emplace_back(Pizza (20.1, "Meat Lovers"));
	pizzas.emplace_back(Pizza (18.95, "Buffalo Chicken"));
	pizzas.emplace_back(Pizza (21.50, "Vegan"));
	pizzas.emplace_back(Pizza (17.65, "4 Chesses"));
	pizzas.emplace_back(Pizza(18.5, "Margherita"));
}

void Order::fulfillDrinks() {
	drinks.emplace_back(Drink("Cola", 3.5));
	drinks.emplace_back(Drink("Orange Juice", 3.0));
	drinks.emplace_back(Drink("Water", 1.0));
	drinks.emplace_back(Drink("Fanta", 2.9));
	drinks.emplace_back(Drink("Iced Tea", 2.2));
}

Order::Order() {}

void Order::setID() {
	random_device rd; 
	mt19937 gen(rd());
	uniform_int_distribution<> dis(1000, 9999);
	orderID = dis(gen);
}

void Order::addPizzaMenu(string name, double price) {
	pizzas.emplace_back(Pizza(price, name));
}

void Order::addDrinkMenu(string name, double price) {
	drinks.emplace_back(Drink(name, price));
}

void Order::changePizza(string name, double price) {
	for (int i = 0; i < pizzas.size(); i++)
		if (pizzas[i].getnameofpizza() == name)
			pizzas[i].setprice(price);
}

void Order::changeDrink(string name, double price) {
	for (int i = 0; i < drinks.size(); i++)
		if (drinks[i].getnameofdrink() == name)
			drinks[i].setprice(price);
}

int Order::getID() {
	return orderID;
}

double Order::getPriceoforder() {
	return priceoforder;
}

string Order::getName() {
	return name;
}
