// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string>
#include "OwnLibrary.h"
using namespace  std;
string ReadPassword() {
string	password;
	cout << "Please Enter a 3-letter Password (all capital)\n";
	cin >> password;
	return password;
};
bool guessPassword(string OriginalPassword) {
	string word = "";
	int counter = 0;
	for (int i = 65; i <= 98; i++) {
		for (int j = 65; j <= 98; j++) {
			for (int k = 65; k <= 98; k++) {
				word += char(i);
				word += char(j);
				word += char(k);
				counter++;
				cout << "Trial [" << counter << "]: ";
				cout << word << endl;
				if (word == OriginalPassword) {
					cout << "\nPassword is: "<< word << "\n";
					cout << "found after: " << counter << "Trials\n";
					return true;
				}
				word = "";
			}
		}
	}
	return false;
}

int main() {

	guessPassword(ReadPassword());
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
