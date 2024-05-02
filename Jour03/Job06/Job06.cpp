#include <iostream>
using namespace std;

int main() {
    const int taille_tableau = 10;
    int T[taille_tableau];
    int compteur = 0;

    // Demander à l'utilisateur de saisir les entiers
    cout << "Veuillez saisir 10 entiers :\n";
    for (int i = 0; i < taille_tableau; ++i) {
        cout << "Entier " << i + 1 << " : ";
        cin >> T[i];
    }

    // Compter le nombre d'entiers supérieurs ou égaux à 5
    for (int i = 0; i < taille_tableau; ++i) {
        if (T[i] >= 5) {
            compteur++;
        }
    }

    // Afficher le résultat
    cout << "il y a " << compteur << " nombre d'entiers supérieurs ou égaux à 5" <<endl;

    return 0;
}
