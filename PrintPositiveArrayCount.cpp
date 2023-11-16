// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "OwnLibrary.h"


using namespace std;

int ReadNumber()
{
	int Number = 0;
	cout << "Please enter a number ? ";
	cin >> Number;
	return Number;
}

int RandomNumber(int From, int To) {
	int Randnum = rand() % (To - From + 1) + From;
	return Randnum;
}
void FillArrayWithRandomNumbers(int& NumberOfElements, int array[100]) {
	cout << "Enter number of  elements:" << std::endl;
	cin >> NumberOfElements;

	for (int i = 0; i < NumberOfElements; i++) {
		array[i] = RandomNumber(-100, 100);
	}
	cout << endl;
}

int PositiveCountInArray( int array[100], int arrayLength) {
	int counter = 0;
	for (int i = 0; i < arrayLength; i++) {
		if (array[i] > 0) {
			counter++;
		}
	}
	return counter;
}



void PrintPositiveArrayCount(int arr[100], int arrlength)
{

		cout << PositiveCountInArray(arr,arrlength) << " ";
	cout << "\n";
}


int main()
{
	int arrLength;
	int arr[100];
	srand((unsigned)time(NULL));
	FillArrayWithRandomNumbers(arrLength, arr);
	lib::PrintArray(arr, arrLength);
	cout << "Positive: \n";
	PrintPositiveArrayCount(arr, arrLength);

	
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
