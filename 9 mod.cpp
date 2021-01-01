//=================isNumber.cpp - פאיכ נואכ³חאצ³¿===================

#include<iostream>

using namespace std;

bool isNumber(char character)
{
	char numbers[10] = { '1','2','3','4','5','6','7','8','9','0' };
	for (int i = 0; i < 10; i++)
	{
		if (character == numbers[i])
		{
			return true;
		}
	}
	return false;
}