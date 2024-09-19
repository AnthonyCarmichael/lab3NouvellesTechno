#include <iostream>


using namespace std;

int main()
{
	string nom = "";
	string pref = "";
	int age = 0;

	cout << "Hello world" << endl << "Entrer votre nom ";
	cin >> nom;

	cout << "Entrer votre age ";
	cin >> age;

	cout << "Entrer votre plat favoris ";
	cin >> pref;

	cout << endl << "analysing..." << endl << "Apres analyse, j'ai determiné que vous êtes une personne incroyablement unique!";
	system("pause");

	return 0;
}