#include<iostream>
#include<math.h>
#include<ctime>

using namespace std;

//=============================ФУНКЦИЯ РАСЧЕТА РАССТОЯНИЯ===========================================
double RangeTo0(double a, double b)
{
	return sqrt(pow(a, 2) + pow(b, 2)); // Формула расчетов длины от нужной точки до начала координат
}
//===========================ДАННЫЕ ЛАБОРАТОРНОЙ=======================================================
void LabData()
{
	cout << "| Laboratorna Robota |      | #6  |" << endl;
	cout << "| Filonenko Andrii   | IS03 | v30 |" << endl << endl;
}
//======================ГЕНЕРАТОР СЛУЧАЙНОГО ДЕЙСТВИТЕЛЬНОГО=============================
double RandomNumber()
{
	return static_cast<double>(static_cast<double>(rand()) + static_cast<double>(rand() % 10000) / 10000) * pow(-1, (rand() % 2 - 1));
}
//==========================ФУНКЦИЯ ГЕНЕРАЦИИ ТОЧЕК=======================================
double PointsGenerator(int n, double range0)
{
	double xLeast = 0, yLeast = 0;
	srand((time(NULL))); // Генератор случайного числа
	for (int i = 1; i <= n; i++) // Цикл, генерирующий указанное количество точек на системе координат
	{

		double x = RandomNumber(); // Случайный действительный х
		cout << i << ") x=" << x << " ";
		double y = RandomNumber(); // Случайный действительный у
		cout << "y=" << y << endl;

		double range = RangeTo0(x, y); // Используем функцию
		if (range0 > range) // Проверка, является ли последнее найденное растоянние меньшим
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
//====================ФУНКЦИЯ ВВОДА КОЛИЧЕСТВА ТОЧЕК========================
int EnterNumber() 
{
	int n = 0;
	cout << "Enter n : ";
	cin >> n; // Введение количества точек
	cout << endl;
	return n;
}
//========================ГЛАВНАЯ ФУНКЦИЯ=================================
int main()
{
	double range0 = DBL_MAX; // Максимальное расстояние
	LabData(); // Выведение данных о работе
	int n = EnterNumber();
	double rangeLeast = PointsGenerator(n, range0); // Генерация координат точек и рассчет расстояния 
	cout << endl << endl;
	cout << "The least range = " << rangeLeast << endl; // Выведение конечных данных
	return 0;
}
//==========================================================================