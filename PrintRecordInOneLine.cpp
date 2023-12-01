// ProgrammingAdvicess.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include<iostream>
#include<string>
using namespace std;

struct stClient {
	string ClientName;
	string AccountNumber;
	string PINCODE;
	string PhoneNumber;
	double AccountBalance;
};

stClient ReadNewClient() {
	stClient Client;
	cout << "Please Enter Your Name: " << endl;
	getline(cin,Client.ClientName);

	cout << "Please Enter Your AccountNumber: " << endl;
	getline(cin, Client.AccountNumber);

	cout << "Please Enter Your PIN CODE: " << endl;
	getline(cin, Client.PINCODE);

	cout << "Please Enter Your Phone Number: " << endl;
	getline(cin, Client.PhoneNumber);

	cout << "Please Enter Your Account Balance: " << endl;
	cin >> Client.AccountBalance;

	return Client;
}
string PrintRecordInOneLine(stClient Client, string Seperator = "|##|") {
	string stCLientRecord = "";

	stCLientRecord += Client.ClientName + Seperator;
	stCLientRecord += Client.AccountNumber + Seperator;
	stCLientRecord += Client.PhoneNumber + Seperator;
	stCLientRecord += Client.PINCODE + Seperator;
	stCLientRecord += to_string(Client.AccountBalance);
	return stCLientRecord;
}


int main() 
{
	stClient Client;
	cout << "Please Enter Your Personal Information" << endl;
	Client = ReadNewClient();
	cout << PrintRecordInOneLine(Client);




	return 0;
}




// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
