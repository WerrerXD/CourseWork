#pragma once
#include "Order.h"
class User {
	string login, password;
public:
	User(string, string);

	string getLogin();

	string getPassword();

	void registration();

	int signIn();
};