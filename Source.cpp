#include <iostream>
#include <vector>
#include <Windows.h>
#include "ChatDataBase.h"
#pragma warning(disable:4996)

using namespace std;

string hill = "n";
string _login, _pass;
int set;
int _idUser = 1;

int main() {
#pragma region консольный параметр
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// принимает только кириллицу
	//system("chcp 1251");

	// при выводе из массива не воспринимает кириллицу
	//setlocale(LC_ALL, "RUSSIAN");
#pragma endregion

	while (hill != "y" && hill != "Y") {
		Accounts acc;
		cout << "Добро пожаловать в программу:" << endl;
		
		while (true) {
			if (acc.getIdUsers() != 0) {
				cout << "Пользователей в системе: " << acc.getIdUsers() << endl;
				cout << "1 - Добавление пользователя, 2 - Вход в программу, 0 - для выхода." << endl;
				cin >> set;
				if (set == 1) {
					// додумать функционал, сколько пользователей собираешься добавить
					acc.addData(acc.getIdUsers());
					cout << "Пользователь добавлен!" << endl;
				}
				else if (set == 2){
					cout << "Введите id пользователя: ";
					cin >> _idUser;
					_idUser--;
					cout << "Введите Login: ";
					cin >> _login;
					cout << "Введите Password: ";
					cin >> _pass;
					acc.loginProg(_idUser, _login, _pass);
				}
				else
					break;
			}
			else {
				cout << "Пользователей нет в программе!" << endl;
				cout << "Регистрация пользователя: " << endl;
				acc.setData(_idUser);
				cout << "Пользователь добавлен!" << endl;
			}
		}

		cout << "Выйти из программы? y/n :";
		cin >> hill;
		cout << hill << endl;
	}
	return 0;
}