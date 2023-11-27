// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <iomanip>
#include "OwnLibrary.h"
using namespace std;


short NumberOccurencyInMatrix(int arr[3][3], short Number, short Rows, short Cols) {
	 
	short Counter = 0;
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			if  (arr[i][j] == Number)
			{
				Counter++;
			}
		}

	}
	return Counter;
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(6) << arr[i][j] << "    ";
		}
		cout << endl;
	}
	cout << endl;
}


int main(){

    srand((unsigned)time(NULL));

	short number = lib::readNumber();

	int arr[3][3] =
	{
		{9,0,0},{0,9,0},{0,0,9}
	};
	
	cout << "Matrix 1: \n\n";
	PrintMatrix(arr,3,3);
	
	cout << "The Number " << number << " Occured " << NumberOccurencyInMatrix(arr, number, 3, 3) << " Times " << endl;
	
	
	
  

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
