// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <iomanip>
#include "OwnLibrary.h"
using namespace std;
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = lib::RandomNumber(1, 9);
		}
	}
}
void MultiplyTwoMatrices(int arr[3][3], int arr2[3][3], int Product[3][3] , short Rows, short Cols) {
	
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Product[i][j] = (arr[i][j] * arr2[i][j]);
			
		}
	}
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

	int arr[3][3];
	int arr2[3][3];
	int Product[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	FillMatrixWithRandomNumbers(arr2, 3, 3);

	cout << "This is the first Matrix: \n\n";
	PrintMatrix(arr,3,3);

	cout << "This is the second Matrix: \n\n" ;
	PrintMatrix(arr2, 3, 3);
	
	MultiplyTwoMatrices(arr, arr2,Product ,3, 3);

	cout << "Product of matrix is: \n" << endl;
	PrintMatrix(Product, 3, 3);



  

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
