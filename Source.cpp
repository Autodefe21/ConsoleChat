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
#pragma endregion

	while (hill != "y" && hill != "Y") {
		Accounts acc;
		cout << "Welcome for a console chat:" << endl;

		while (true) {
			if (acc.getIdUsers() != 0) {
				cout << "Users on system: " << acc.getIdUsers() << endl;
				cout << "1 - Add user, 2 - Enter program, 0 - exit." << endl;
				cin >> set;
				if (set == 1) {
					// додумать функционал, сколько пользователей собираешься добавить
					acc.addData(acc.getIdUsers());
					cout << "User add!" << endl;
				}
				else if (set == 2) {
					cout << "Enter id user: ";
					cin >> _idUser;
					_idUser--;
					cout << "Enter Login: ";
					cin >> _login;
					cout << "Enter Password: ";
					cin >> _pass;
					acc.loginProg(_idUser, _login, _pass);
				}
				else if (set == 0)
					break;
			}
			else {
				cout << "Upload users fail!" << endl;
				cout << "Registred user: " << endl;
				acc.setData(_idUser);
				cout << "Added user!" << endl;
			}
		}

		cout << "Confirm Exit! y/n :";
		cin >> hill;
		cout << hill << endl;
	}
	return 0;
}