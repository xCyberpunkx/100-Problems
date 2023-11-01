// ProgrammingAdvices.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include <iostream>
#include <string>
using namespace  std;


void PrintRow() {
	cout << "\t\t\tMultiplication Table From 1 to 10\n\n\n";
	for (int i = 1; i <= 10; i++) {
		cout << "\t    " << i;
	}
	cout << "\n\n";
	cout << "-------------------------------------------------------------------------------------------" << endl;
};
string ColumnSeperator(int i) {
	if (  i < 10) {
	return	 "   |";
	}
	else {
	return	 "  |";
	}
}
void PrintTable(){
	PrintRow();
	for (int i = 1; i <= 10; i++)
	{
		cout << " " << i << ColumnSeperator(i) << "\t";
	for(int j = 1;j <= 10;j++){
		cout << i * j << "\t";
	}
	cout << endl;
	}
};
int main()
{
	PrintTable();

	
	



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
