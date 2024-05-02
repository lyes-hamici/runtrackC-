#include <iostream>
using namespace std;

int main() {
    const int taille_tableau = 10;
    int T[taille_tableau];
    int indice_max = 0;

    // Demander à l'utilisateur de saisir les entiers
    cout << "Veuillez saisir 10 entiers :\n";
    for (int i = 0; i < taille_tableau; ++i) {
        cout << "Entier " << i + 1 << " : ";
        cin >> T[i];
    }

    // Trouver l'indice du plus grand élément
    for (int i = 1; i < taille_tableau; ++i) {
        if (T[i] > T[indice_max]) {
            indice_max = i;
        }
    }

    // Afficher le résultat
    cout << "L'indice du plus grand élément est : " << indice_max << endl;

    return 0;
}
