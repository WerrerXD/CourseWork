#include "Client.h"


void Client::clientFunc() {
	Order order;
	string name;
	cout << "¬ведите ваше им€" << endl;
	cin >> name;
	system("cls");
	order.setName(name);
	order.addPizza();
	order.addDrink();
	Payment payment;
	payment.setPayment(order.getPriceoforder());
	Delivery delivery;
	delivery.deliver(order.getName(), order.getID());
}

Client::Client(string login, string password): User(login,password) {}
