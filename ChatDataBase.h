#pragma once
#pragma warning(disable:4996)

#include <iostream>
#include <vector>

using namespace std;

class Accounts { // ����� ��� �������� ���������, ����� ������������� ���������� ��
protected:
	string userData; // ����� ������ ��� ������������

#pragma region ������� �������������
	vector <vector<string>> idUsers; // ���� ������������� ������������� �� �����
#pragma endregion

public:
	Accounts();

	void setData(int value); // ��������� ����� ���������� ����� � ���������
	void addData(size_t value); // ���������� ����������� ����� � ���������

	int getIdUser(size_t value) const; // ��������� ���������� ����� � ���������

	string getUsers(int value) const; // ��������� ������ ��������
	
	size_t getIdUsers() const;

	void loginProg(size_t id, string login, string pass);

	~Accounts(); // ����������
};