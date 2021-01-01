#include<iostream>
#include<math.h>
#include<ctime>

using namespace std;

//=============================������� ������� ����������===========================================
double RangeTo0(double a, double b)
{
	return sqrt(pow(a, 2) + pow(b, 2)); // ������� �������� ����� �� ������ ����� �� ������ ���������
}
//===========================������ ������������=======================================================
void LabData()
{
	cout << "| Laboratorna Robota |      | #6  |" << endl;
	cout << "| Filonenko Andrii   | IS03 | v30 |" << endl << endl;
}
//======================��������� ���������� ���������������=============================
double RandomNumber()
{
	return static_cast<double>(static_cast<double>(rand()) + static_cast<double>(rand() % 10000) / 10000) * pow(-1, (rand() % 2 - 1));
}
//==========================������� ��������� �����=======================================
double PointsGenerator(int n, double range0)
{
	double xLeast = 0, yLeast = 0;
	srand((time(NULL))); // ��������� ���������� �����
	for (int i = 1; i <= n; i++) // ����, ������������ ��������� ���������� ����� �� ������� ���������
	{

		double x = RandomNumber(); // ��������� �������������� �
		cout << i << ") x=" << x << " ";
		double y = RandomNumber(); // ��������� �������������� �
		cout << "y=" << y << endl;

		double range = RangeTo0(x, y); // ���������� �������
		if (range0 > range) // ��������, �������� �� ��������� ��������� ���������� �������
		{
			range0 = range;
			xLeast = x;
			yLeast = y;

		}
		else
		{
			continue;
		}
	}
	cout << endl << "x of least range =" << xLeast << endl << "y of least range =" << yLeast;
	return range0;
}
//====================������� ����� ���������� �����========================
int EnterNumber() 
{
	int n = 0;
	cout << "Enter n : ";
	cin >> n; // �������� ���������� �����
	cout << endl;
	return n;
}
//========================������� �������=================================
int main()
{
	double range0 = DBL_MAX; // ������������ ����������
	LabData(); // ��������� ������ � ������
	int n = EnterNumber();
	double rangeLeast = PointsGenerator(n, range0); // ��������� ��������� ����� � ������� ���������� 
	cout << endl << endl;
	cout << "The least range = " << rangeLeast << endl; // ��������� �������� ������
	return 0;
}
//==========================================================================