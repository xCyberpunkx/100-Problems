// ProgrammingAdvicess.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include<iostream>
#include<string>
using namespace std;

string ReadString(string& Name) {
	cout << "Please Enter a String: \n";
	getline(cin, Name);
	return Name;
}
void GetWord(string Name) {
	bool isAWord = true;
	int i = 0;
	while( i < Name.length())
	{

		if (Name[i] != ' ' && isAWord == true)
		{
			cout << Name[i];
			i++;
		}

		else {
			cout << endl;
			i++;
		}
	}

}

int main() 
{
	string name ;
	GetWord(ReadString(name));

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
