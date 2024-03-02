#pragma once
#include "User.h"
class Admin : public User {
public:
	Admin(string, string);

	void adminMenu();
	void addAdmin();
	void addPizza(Order&);
	void addDrink(Order&);
	void changePizza(Order&);
	void changeDrink(Order&);
	void showMenu(Order&);
};

