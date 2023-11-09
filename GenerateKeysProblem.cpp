// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string>
#include "OwnLibrary.h"
using namespace  std;

int RandomNumber(int From, int To) {
	int Randnum = rand() % (To - From + 1) + From;
	return Randnum;
}
enum enCharType {
	SmallChar = 1,
	CapitalChar = 2,
	SpecialChar = 3,
	Digit = 4
};
char RandomCharGenerator(enCharType CharType) {
	switch (CharType)
	{
	case enCharType::CapitalChar: {
		return char(RandomNumber(65, 90));
		break;
	}
	case enCharType::SmallChar: {
		return char(RandomNumber(97, 122));
		break;
	}
	case enCharType::SpecialChar: {
		return char(RandomNumber(33, 47));
		break;
	}
	case enCharType::Digit: {
		return char(RandomNumber(48, 57));
		break;
	}

	default:
		cout << "something went wrong";
		break;
	}
}
string GenerateWord(enCharType CharType, short length) {
	string word = "";
	for (int i = 0; i < length; i++) {
		word += RandomCharGenerator(enCharType::CapitalChar);
	}
	return word;
}
string GenerateKey() {
	string key = "";
	key = GenerateWord(enCharType::CapitalChar, 4) + "-";
	key += GenerateWord(enCharType::CapitalChar, 4) + "-";
	key += GenerateWord(enCharType::CapitalChar, 4) + "-";
	key += GenerateWord(enCharType::CapitalChar, 4);
	return key;
}

void GenerateKeys(int NumberOfKeys){

	for (int i = 0; i <= NumberOfKeys; i++) {
		std::cout << "Key[" << i << "]: ";
		std::cout << GenerateKey() << endl;
}
	
}

int main() 
{
	srand((unsigned)time(NULL));
	GenerateKeys(lib::readPositiveNumber("Please Enter How Many Keys You Want To Generate: \n")) ;
	
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
