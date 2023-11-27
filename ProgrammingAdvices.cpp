// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <iomanip>
#include "OwnLibrary.h"
#include <vector>
using namespace std;


void intersectedNumbers( int arr[3][3],int arr2[3][3],vector<int>& vIntersectedNumbers, short Rows, short Cols)
{
	

	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			
			if (arr[i][j] == arr2[i][j])
				vIntersectedNumbers.push_back(arr[i][j]);
		}
		
	}

}
void PrintIntersectedNumbers(vector<int> vIntersectedNumbers) {
	for (int &i : vIntersectedNumbers)
	{
		cout << setw(6) << i << "   ";
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
	
	int arr[3][3] =
	{
		{9,5,7},{2,12,4},{31,1,55}
	};

	int arr2[3][3] =
	{
		{9,45,44},{19,12,31},{87,16,55}
	};

	vector<int> vintersectedNumbers;

	cout << "Matrix 1: \n\n";
	PrintMatrix(arr,3,3);
	
	cout << "Matrix 2: \n\n";
	PrintMatrix(arr2, 3, 3);

	intersectedNumbers(arr, arr2, vintersectedNumbers, 3, 3);
	cout << "Intersected Numbers are: \n\n";
	PrintIntersectedNumbers(vintersectedNumbers);

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
