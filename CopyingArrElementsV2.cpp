// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstdlib>
#include <limits>
//#include <ctime>
//#include "OwnLibrary.h"
#include <vector>
using namespace std;

using namespace std;

int ReadNumber()
{
	int Number = 0;
	cout << "Please enter a number ? ";
	cin >> Number;
	return Number;
}

int RandomNumber(int From, int To)
{
	int RandNum = 0;
	RandNum = rand() % (To - From + 1) + From;
	return RandNum;
}

void FillArrayWithRandomNumbers(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void AddArrayElements(int Number, int arr[100], int& Counter)
{
	arr[Counter] = Number;
	Counter++;
}

void GetArrayElements(int arr[100], int arr2[100], int arrlength, int& Counter)
{
	do
	{
		AddArrayElements(arr[Counter], arr2, Counter);
	} while (arrlength > Counter);
}

void PrintArray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}


int main()
{
	srand((unsigned)time(NULL));

	int arr[100], arr2[100], arrlength, Counter = 0;

	arrlength = ReadNumber();

	FillArrayWithRandomNumbers(arr, arrlength);

	cout << "\nArray 1 elements: " << endl;
	PrintArray(arr, arrlength);

	GetArrayElements(arr, arr2, arrlength, Counter);

	cout << "\nArray 2 elements after copy:" << endl;
	PrintArray(arr2, arrlength);

	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
