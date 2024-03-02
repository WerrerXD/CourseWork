#include "User.h"

User::User(string login_, string password_): login(login_), password(password_) {}

string User::getLogin() {
	return login;
}

string User::getPassword() {
	return password;
}


int User::signIn() {
	setlocale(LC_ALL, "ru");
	ifstream file("admins.txt");
	string line, s;
	while (getline(file, line)) {
		s = login + " " + password;
		if (line.find(s) != string::npos) return 1;
	}
	ifstream file1("users.txt");
	string line1, s1;
	while (getline(file1, line1)) {
		s1 = login + " " + password;
		if (line1.find(s1) != string::npos) return 2;
	}
	return 0;
}

void User::registration() {
	setlocale(LC_ALL, "ru");
	ofstream file("users.txt", ios::app);
	file << login << " " << password << " ";
	file.close();
	cout << "Регистрация прошла успешно" << endl;
}