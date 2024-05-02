#include <iostream>
#include <string>

using namespace std;
struct Staff {
    string nom;
    string prenom;
};

int main() {
    Staff alicia = {"Cordial", "Alicia"};
    Staff pierre = {"Malardier", "Pierre"};
    cout << "Prénoms du staff :" << endl;
    cout << alicia.prenom << endl;
    cout << pierre.prenom << endl;
    int nombreEtudiants;
    cout << "Entrez le nombre d'étudiants : ";
    cin >> nombreEtudiants;
    struct Etudiant {
        string nom;
        string prenom;
    };
    Etudiant* etudiants = new Etudiant[nombreEtudiants];
    cout << "Entrez les noms et prénoms des étudiants :" << endl;
    for (int i = 0; i < nombreEtudiants; ++i) {
        cout << "Nom de l'étudiant " << i+1 << " : ";
        cin >> etudiants[i].nom;
        cout << "Prénom de l'étudiant " << i+1 << " : ";
        cin >> etudiants[i].prenom;
    }
    cout << "Prénoms des étudiants :" << endl;
    for (int i = 0; i < nombreEtudiants; ++i) {
        cout << etudiants[i].prenom << endl;
    }
    delete[] etudiants;
    return 0;
}