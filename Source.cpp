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
#pragma region ���������� ��������
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ��������� ������ ���������
	//system("chcp 1251");

	// ��� ������ �� ������� �� ������������ ���������
	//setlocale(LC_ALL, "RUSSIAN");
#pragma endregion

	while (hill != "y" && hill != "Y") {
		Accounts acc;
		cout << "����� ���������� � ���������:" << endl;
		
		while (true) {
			if (acc.getIdUsers() != 0) {
				cout << "������������� � �������: " << acc.getIdUsers() << endl;
				cout << "1 - ���������� ������������, 2 - ���� � ���������, 0 - ��� ������." << endl;
				cin >> set;
				if (set == 1) {
					// �������� ����������, ������� ������������� ����������� ��������
					acc.addData(acc.getIdUsers());
					cout << "������������ ��������!" << endl;
				}
				else if (set == 2){
					cout << "������� id ������������: ";
					cin >> _idUser;
					_idUser--;
					cout << "������� Login: ";
					cin >> _login;
					cout << "������� Password: ";
					cin >> _pass;
					acc.loginProg(_idUser, _login, _pass);
				}
				else
					break;
			}
			else {
				cout << "������������� ��� � ���������!" << endl;
				cout << "����������� ������������: " << endl;
				acc.setData(_idUser);
				cout << "������������ ��������!" << endl;
			}
		}

		cout << "����� �� ���������? y/n :";
		cin >> hill;
		cout << hill << endl;
	}
	return 0;
}