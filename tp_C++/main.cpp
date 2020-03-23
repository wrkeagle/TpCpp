/*Créez un programme qui crée un fichier qui contient un liste de prénoms puis demandez à l’utilisateur de saisir un prénom, affichez un message indiquant si le prénom a été trouvé ou non. Votre programme doit être découpé en fonctions dont voici les signatures :

void creerFichier()
crée un fichier avec des prénoms

bool chargeFichier(vector<string> &listeNoms)
charge un fichier en mémoire
listeNom contiendra un tableau dynamique de la liste des prénoms
la fonction renvoie true si le chargement a réussi sinon false

bool chercheNom(string nom, const vector<string> &listeNoms)
cherche nom dans listeNom
renvoi true si elle trouve sinon false
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;
typedef vector<string> StringList;

void creerFichier()
{
    string nomFichier = "prenoms.txt";
    ofstream monFichierOut(nomFichier);
    monFichierOut << "Jean" << endl;
    monFichierOut << "Fabrice" << endl;
    monFichierOut << "Romuald" << endl;
    monFichierOut << "Patrice" << endl;
    monFichierOut << "Michel" << endl;
    monFichierOut << "Denis" << endl;

}

bool chargeFichier(vector<string> &listeNoms)
{
    string nomFichier = "prenom.txt";
    ifstream monFichierIn(nomFichier);
        if (monFichierIn.is_open())
    {
        while(!monFichierOut.eof())
            {
             while(getline(monFichierIn, str)){
                cout << str << endl;
             }
            listeNoms.push_back(listeNoms);

        }
    }
    else{
        nomFichier.close("prenoms.txt")
    }
}

