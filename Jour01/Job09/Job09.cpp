#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Demander à l'utilisateur de saisir trois entiers
    cout << "Entrez le premier entier : ";
    cin >> num1;
    cout << "Entrez le deuxième entier : ";
    cin >> num2;
    cout << "Entrez le troisième entier : ";
    cin >> num3;

    // Vérifier quel est le plus grand
    int max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    // Afficher le résultat
    cout << "Le plus grand des trois entiers est : " << max << endl;

    return 0;
}
