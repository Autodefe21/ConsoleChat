#pragma once
#pragma warning(disable:4996)

#include <iostream>
#include <vector>

using namespace std;

class Accounts { // класс для создания аккаунтов, также динамического добавления их
protected:
	string userData; // логин пароль имя пользователя

#pragma region векторы пользователей
	vector <vector<string>> idUsers; // айди присваеваемый автоматически по циклу
#pragma endregion

public:
	Accounts();

	void setData(int value); // начальная точка добавление людей в программу
	void addData(size_t value); // добавление последующих людей в программу

	int getIdUser(size_t value) const; // получение количества людей в программе

	string getUsers(int value) const; // получение данных человека
	
	size_t getIdUsers() const;

	void loginProg(size_t id, string login, string pass);

	~Accounts(); // деструктор
};