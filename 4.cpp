#include<iostream>

using namespace std;

int main()
{
	cout << "Filonenko Andrey IS-03" << endl << "Laboratorna Robota 4" << endl;
	float x, fraction = 1;
	cout << "Input x : ";
	cin >> x;
	for (float i = 2; i <= 64; i *= 2)
	{
		if (x == i-1)
		{
			cout << "ERROR";
			return 0;
		}
	    fraction *= (x - i) / (x - (i - 1));
	}
	cout << "Answer : " << fraction;
	
}