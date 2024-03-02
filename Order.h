#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Pizza.h"
#include "Drink.h"
#include "Payment.h"
#include "Delivery.h"
using namespace std;
class Order {
	string name;
	vector<Pizza> pizzas;
	vector<Drink> drinks;
	double priceoforder;
	double timeoforder;
	int orderID;
public:
	void addPizza();
	void addDrink();
	Order();
	double getPriceoforder();
	void setName(string);
	void fulfillPizzas();
	void fulfillDrinks();
	string getName();
	void setID();
	int getID();
	void addPizzaMenu(string, double);
	void addDrinkMenu(string, double);
	void changePizza(string, double);
	void changeDrink(string, double);
	void getMenu();
};

