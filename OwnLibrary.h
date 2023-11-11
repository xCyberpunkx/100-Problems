
#pragma once
#include <iostream>
using namespace std;


namespace lib {
	//string error input handling function
	int readNumber() {
		int number;
		cout << "Please Enter  A number: \n";
		cin >> number;
		while (cin.fail()) {
			cin.clear();
			cin.ignore(std::numeric_limits < std::streamsize>::max(), '\n');
			cout << "Invalid Input Please Enter A number: \n";
			cin >> number;

		}
		return number;
	}
	int readPositiveNumber(string Message) {
		int number = 0;
		do {
			cout << Message << endl;
			cin >> number;
		} while (number <= 0);
		return number;
	}

}
