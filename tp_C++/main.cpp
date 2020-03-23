/*Cr�ez un programme qui cr�e un fichier qui contient un liste de pr�noms puis demandez � l�utilisateur de saisir un pr�nom, affichez un message indiquant si le pr�nom a �t� trouv� ou non. Votre programme doit �tre d�coup� en fonctions dont voici les signatures :

void creerFichier()
cr�e un fichier avec des pr�noms

bool chargeFichier(vector<string> &listeNoms)
charge un fichier en m�moire
listeNom contiendra un tableau dynamique de la liste des pr�noms
la fonction renvoie true si le chargement a r�ussi sinon false

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

