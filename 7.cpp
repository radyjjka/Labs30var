#include<iostream>
#include<ctime>
#include<iomanip>

using namespace std;

// Prototypes of the functions.

void arrayOutput(int* array, int n);
void arrayRandomizer(int* array, int n);
int* maxArrayValue(int* array, int n);
int giveEvenDif(int* array, int* max, int min, int n);
void clearDynamicMemory(int* array, int* pointer);
int minArrayValue(int* array, int n, int startVal);

int main()
{
	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";

	int n;
	cout << "ENTER THE SIZE OF THE ARRAY > ";
	cin >> n; // Entering the number of array elements.

	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";

	int* K = new int[n]; // Giving some dynamic memory for the array to store the elements in there.

	srand(time(NULL)); // Random number generator.

	arrayRandomizer(K, n); // Filling the array with random integral numbers.

	arrayOutput(K, n); // Outputting the array.

	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";

	int* max = maxArrayValue(K, n);; // Creating a pointer / It will help us to memorize the max element.
	// We also give it the value of the first array element.

	int min = 999; // 999 makes us sure that first element is gonna be smaller than any of the array elements.

	min = minArrayValue(K, n, min); // Finding the min element.
	
	cout << "THE MAX ELEMENT IS > " << *max << endl; // Outputting the max element of the array.
	cout << "THE MIN ELEMENT IS > " << min << endl; // Outputting the max element of the array.
	cout << "THEIR DIFFERENCE   >" << giveEvenDif(K, max, min, n) << endl; // Outputting the difference between max and min;

	/* The function in this line calculates the dif between max and min
	and replaces the even positioned elements with it. */

	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";

	arrayOutput(K, n); // Outputting the array.

	cout << "\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n";

	clearDynamicMemory(K, max); // Clearing the dynamic memory we used.

}

void arrayOutput(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << setw(3) << i + 1 << " > ELEMENT > " << array[i] << endl;
	}
}
void arrayRandomizer(int* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		array[i] = rand() % 21 - 10;
	}
}
int* maxArrayValue(int* array, int n)
{
	int* pointer = array;
	for (int i = 1; i < n; i++)
	{
		if (array[i] > *pointer)
		{
			pointer = &array[i];
		}
		else
		{
			continue;
		}
	}
	return pointer;
}
int giveEvenDif(int* array, int* max, int min, int n)
{
	int difference = *max - min;
	for (int i = 1; i < n; i += 2)
	{
		array[i] = difference;
	}
	return difference; 
}
void clearDynamicMemory(int* array, int* pointer)
{
	pointer = nullptr;
	delete[] array;
	array = nullptr;
}
int minArrayValue(int* array, int n, int startVal)
{
	for (int i = 0; i < n; i++)
	{
		if (array[i] < startVal)
		{
			startVal = array[i];
		}
	}
	return startVal;
}