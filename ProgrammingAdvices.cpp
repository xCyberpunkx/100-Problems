// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string>
#include "OwnLibrary.h"
using namespace  std;

// read positive number for the elements 
// print array elemetns
//lib::readPositiveNumber();

void GetElements(int &NumberOfElements, int array[]) {
	cout << "Enter number of  elements:" << std::endl;
	cin >> NumberOfElements;

	for (int i = 0; i < NumberOfElements; i++) {
		cout << "Element[" << i + 1 << "]: ";
		cin >> array[i];
	}
	cout << endl;
}
// Procedure to check  ----TODO---

void PrintArray(int NumberOfElements, int array[]) {
	for (int i = 0; i < NumberOfElements; i++) {
	 cout << "Element[" << i + 1 << "]: ";
	 cout << array[i] << endl;
	}
}
int timesRepeated(int number, int array[], int arrayLength) {
	int counter = 0;
	for (int i = 0; i < arrayLength; i++) {
		if (number == array[i]) {
			counter++;
		}
	}
	return counter;
}
int main() 
{
	int arr[100], numberToCheck, arrayLength;
 GetElements(arrayLength, arr);
 cout << "Original Array: \n";
	PrintArray(arrayLength,arr);
	numberToCheck = lib::readPositiveNumber("Enter The Number You want to check: \n");
	cout << "number " << numberToCheck << " is repeated: ";
	cout << timesRepeated(numberToCheck, arr, arrayLength);
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
