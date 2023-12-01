#include<iostream>
#include<string>
using namespace std;

string ReadString()
{
	string Name = "";
	cout << "Please Enter Your String?\n";
	getline(cin, Name);

	return Name;
}

void PrintFirstLetterInString(string Name)
{
	bool FirstLetter = true;
	for (short i = 0; i < Name.length(); i++)
	{
		if ((Name[i] != ' ') && FirstLetter == true)
		{
			cout << Name[i] << endl;
			FirstLetter = false;

		}
		(Name[i] == ' ') ? FirstLetter = true : FirstLetter = false;
	}
}

int main()
{
	string Name = ReadString();
	PrintFirstLetterInString(Name);

	system("pause>0");
}
