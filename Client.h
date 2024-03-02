#pragma once
#include "User.h"
class Client : public User {

public:
	Client(string, string);
	void clientFunc();
};

