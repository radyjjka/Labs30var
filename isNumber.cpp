#include<iostream>
#include<windows.h>
#include<string>
#include"isNumber.h"

using namespace std;

string Processing(string, char); // �������� �������, �� ������ ����� � ����� ��������

int main()
{
	//===============³���������� ���������� ���� � ������===============
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	//===============��������� ����� ��� ����������� ������=================
	cout << "\n\n\n";
	cout << " ����������� ������ �9 / ������ 35 / ��-03 / Գ������� �����\n";
	cout << "\n\n\n";
	//===============����� ����� �� �������-�������� �����================
	string a;
	char rechar;
	//=============================��������=================================
	cout << " ������, ����-�����, ��� ����� : ";
	getline(cin, a);
	cout << " ������, ����-�����, ������-������� : ";
	cin >> rechar;
	cin.ignore(32767, '\n'); // ����������� ��� �������, ���� �������
	cout << "\n\n\n";
	system("CLS"); // ������� ������
	//=======================����� ����� �� rechar=========================
	cout << "\n==========\n\n";
	cout << " �����  : " << a << endl;
	cout << " ������ : " << rechar << endl;
	a = Processing(a, rechar); // ����� ����� � ����� �� ������� ������
	cout << "\n==========\n\n";
	//=======================��������� ����������===========================
	cout << " ��������� ����������� : \n " << a << endl;
	cout << "\n==========\n\n";
	//======================================================================
}
string Processing(string a, char replace)
{
	int counter = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (isNumber(a[i]))
		{
			a[i] = replace;
			counter++;
		}
	}
	if (counter)
	{
		cout << " ʳ������ ����� � ����� : " << counter << ". ������ �� �� " << replace << endl;
	}
	else
	{
		cout << " ����� �� ��������.\n";
	}
	return a;
}