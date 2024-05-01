#include <iostream>

using namespace std;

int main() {
    char operation;
    double num1, num2, resultat;

    cout << "Entrez le premier nombre : ";
    cin >> num1;

    cout << "Entrez l'opération (+, -, *, /) : ";
    cin >> operation;

    cout << "Entrez le deuxième nombre : ";
    cin >> num2;

    switch (operation) {
        case '+':
            resultat = num1 + num2;
            cout << "Le résultat de l'addition est : " << resultat;
            break;
        case '-':
            resultat = num1 - num2;
            cout << "Le résultat de la soustraction est : " << resultat;
            break;
        case '*':
            resultat = num1 * num2;
            cout << "Le résultat de la multiplication est : " << resultat;
            break;
        case '/':
            if (num2 != 0) {
                resultat = num1 / num2;
                cout << "Le résultat de la division est : " << resultat;
            } else {
                cout << "Erreur : division par zéro.";
            }
            break;
        default:
            cout << "Opération non valide.";
            break;
    }

    return 0;
}