#include <iostream>
using namespace std;

int main() {
    string n, m;

    // Demander à l'utilisateur de saisir deux chaînes de caractères
    cout << "Entrez le premier mot : ";
    cin >> n;
    cout << "Entrez le deuxième mot : ";
    cin >> m;

    // Afficher les mots saisis
    cout << "Mots saisis : " << n << ", " << m << endl;

    // Échanger les valeurs des variables n et m
    string temp = n;
    n = m;
    m = temp;

    // Afficher les mots après échange
    cout << "Mots après échange : " << n << ", " << m << endl;

    return 0;
}
