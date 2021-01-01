#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std;

void outputArray(int**, int, int); // Prototype of the outputting function.
int** createArray(int, int); // Prototype of the array creating function.
void fillArray(int**, int, int); // Prototype of the array filling function.
void reverseArrays(int**, int**, int, int); // Prototype of the array reversing function.
void deleteArray(int**, int); // Prototype of the array deleting function.
 
int main()
{
	srand(time(NULL)); // Randomizer.
	cout << "\n................................\n\n";

	int n, m; 
	cout << "Enter ROWS number > ";
	cin >> n; // Inputting the ROWS of the X array.
	cout << "Enter COLS number > ";
	cin >> m; // Inputting the COLUMNS of the X array.

	cout << "\n................................\n\n";

	int** X = createArray(n, m); // Creating the array with certain parameters.

	fillArray(X, n, m); // Filling the array with some random numbers.

	cout << "Array X [" << n << "][" << m << "]\n\n";

	outputArray(X, n, m); // Outputting the original X array.

	cout << "\n................................\n\n";

	int** Y = createArray(m, n); // Creating the array with reversed parameters.

	reverseArrays(X, Y, n, m); // Filling the array with swapped numbers of the first array.
	cout << "Array Y [" << m << "][" << n << "]\n\n"; 
	outputArray(Y, m, n); // Outputting the reversed Y array.

	cout << "\n................................\n\n";

	deleteArray(X, n); // Deleting the X array from the dynamic memory.
	deleteArray(Y, m); // Deleting the Y array from the dynamic memory.

}

void outputArray(int** matrix, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << setw(3) << matrix[i][j] << " ";
		}
		cout << endl;
	}
}
int** createArray(int rows, int cols)
{
	int** array = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[cols];
	}
	return array;
}
void fillArray(int** array, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			array[i][j] = rand() % 21 - 10;
		}
	}
}
void reverseArrays(int** original, int** reversed, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			reversed[j][i] = original[i][j];
		}
	}
}
void deleteArray(int** array, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] array[i];
	}
	delete[] array;
}