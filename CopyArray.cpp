// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string>
//#include <cstdio> // formatting lib
//#include <iomanip> // set width manupilator 
#include "OwnLibrary.h"
using namespace  std;
int RandomNumber(int From, int To) {
	int Randnum = rand() % (To - From + 1) + From;
	return Randnum;
}
void FillArrayWithRandomNumbers(int& NumberOfElements, int array[]) {
	cout << "Enter number of  elements:" << std::endl;
	cin >> NumberOfElements;

	for (int i = 0; i < NumberOfElements; i++) {
		array[i] = RandomNumber(1, 100);
	}
	cout << endl;
}

void PrintArray(int NumberOfElements, int array[]) {
	
	cout <<  "Array Elements: ";
	for (int i = 0; i < NumberOfElements; i++) {
			
		cout << array[i] << " ";	
	}
	cout << endl;
}
void copyarray(int arrSource[100], int arrDestination[100], int arrLength) {
	for (int i = 0; i < arrLength; i++)
	{
		arrDestination[i] = arrSource[i];
	
	}
	
}

int main() 
{
	srand((unsigned)time(NULL));
	int arr[100], arrayLength;
	
	//arrayLength = lib::readPositiveNumber("Enter Array Length");
	FillArrayWithRandomNumbers(arrayLength, arr);
	
	int arr2[100];
	 copyarray(arr, arr2, arrayLength);
	 cout << "Original Array: \n";
	 PrintArray(arrayLength, arr);
	 cout << "Fake Array: \n";
	 PrintArray(arrayLength, arr2);

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
