#include <iostream>
using namespace std;

int main() {
    const int taille_tableau = 5; // Taille du tableau
    int tableau[taille_tableau];

    // Demander à l'utilisateur d'entrer les éléments du tableau
    cout << "Entrez " << taille_tableau << " entiers pour remplir le tableau :\n";
    for (int i = 0; i < taille_tableau; ++i) {
        cout << "Element " << i + 1 << " : ";
        cin >> tableau[i];
    }

    // Calculer la somme des éléments pairs
    int somme_pairs = 0;
    for (int i = 0; i < taille_tableau; ++i) {
        if (tableau[i] % 2 == 0) { // Vérifier si l'élément est pair
            somme_pairs += tableau[i];
        }
    }

    // Afficher la somme des éléments pairs
    cout << "La somme des elements pairs du tableau est : " << somme_pairs << endl;

    return 0;
}
