#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "Андрей Филоненко ИС03 Лабораторная №3" << endl;
    float precision, a, p;



    cout << "Введите точность : ";
    cin >> precision;
    cout << "Введите a : ";
    cin >> a;
    cout << "Введите p : ";
    cin >> p;
    while (p == 1 || p == 2)
    {
        cout << "р не может равняться 1 или 2" << endl;
        cout << "Введите р : ";
        cin >> p;
    }
    int counter = 0;
    float xn, xn1=0.5;
    xn = 1;

    do
    {
        xn = xn1;
        xn1 = (1 / p) * (((p - 1) * xn) + (a / pow(xn, (p - 1))));
        counter++;
        cout << "Итерация " << counter << " : " << xn1 << endl;
    }
    while (abs(xn - xn1) >= precision);
}