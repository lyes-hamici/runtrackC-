#include <iostream>

using namespace std;

int main() {
    int n;
    unsigned long long resultat = 1;
    cout << "Entrez un nombre entier : ";
    cin >> n;
    if (n < 0) {
        cout << "La factorielle n'est pas définie pour les nombres négatifs." << endl;
    } else {
        for (int i = 2; i <= n; ++i) {
            resultat *= i;
        }
        cout << n << "! = " << resultat << endl;
    }
    return 0;
}