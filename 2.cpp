#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru"); 
	
	cout << "Филоненко Андрей ИС-03 \n ";
	

	int time; 
	int remainder;

	cout << "Введите, пожалуйста, момент времени : ";
	cin >> time; 
	while (time < 0) 
	{
		cout << " Время должно быть положительным числом. " << endl << " Введите, пожалуйста, момент времени : "<< endl;
		cin >> time;
	}
	remainder = time % 10;
	cout << " " << endl;
	if ((remainder >= 1 and remainder <= 3) or (remainder >= 6 and remainder <= 8))
	{
		cout << "Горит зеленый свет." << endl;
	}
	else
	{
		cout << "Горит красный свет." << endl;
	}
}