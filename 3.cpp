#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    cout << "������ ��������� ��03 ������������ �3" << endl;
    float precision, a, p;



    cout << "������� �������� : ";
    cin >> precision;
    cout << "������� a : ";
    cin >> a;
    cout << "������� p : ";
    cin >> p;
    while (p == 1 || p == 2)
    {
        cout << "� �� ����� ��������� 1 ��� 2" << endl;
        cout << "������� � : ";
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
        cout << "�������� " << counter << " : " << xn1 << endl;
    }
    while (abs(xn - xn1) >= precision);
}