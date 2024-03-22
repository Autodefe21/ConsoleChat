#include "ChatDataBase.h"

using namespace std;

Accounts::Accounts() { }

void Accounts::setData(int value) {
	string text;
	for (int i = 0; i < value; i++) {
		vector <string> users;
		for (int j = 0; j < 3; j++) {
			cout << "Введите по очереди: Логин, пароль, имя: " << endl;
			cin >> text;
			users.push_back(text);
		}
		idUsers.push_back(users);
	}
}

void Accounts::addData(size_t value) {
	string text;
	value = idUsers.size();
	value++;
	vector <string> users;
	for (int j = 0; j < 3; j++) {
		cout << "Введите по очереди: Логин, пароль, имя: " << endl;
		cin >> text;
		users.push_back(text);
	}
	idUsers.push_back(users);
}

int Accounts::getIdUser(size_t value) const { return idUsers.size(); }

string Accounts::getUsers(int value) const {
	return "Логин: " + idUsers[value][0] + "\n" 
		+ "Пароль: " + idUsers[value][1] + "\n" 
		+ "Имя: " + idUsers[value][2];
}

size_t Accounts::getIdUsers() const {
	return idUsers.size();
}

void Accounts::loginProg(size_t id, string login, string pass) {
	for (int i = 0; i < idUsers.size(); i++) {
		if (login == idUsers[id][0] || pass == idUsers[id][1])
			cout << "Вход выполнен успешно! " << idUsers[id][2] << endl;
		else
			cout << "Не верно указан пользователь или пароль!" << endl;
	}
}

Accounts::~Accounts() { }