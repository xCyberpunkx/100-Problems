// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string>
#include "OwnLibrary.h"
using namespace  std;
int readPositiveNumber(string Message) {
	int number = 0;
	do {
		cout << Message << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}

void PrintLetterPattern(int number)
{
	cout << "\n";
	for (int i = 65; i <= 65 + number - 1; i++) 
{
		for (int j = 1; j <= i - 65 + 1; j++) 
{ 
			cout << char(i);
		} 
cout << "\n"; 
	}
}

int main() {

	PrintLetterPattern(readPositiveNumber("Please Enter A positive Number: "));
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
