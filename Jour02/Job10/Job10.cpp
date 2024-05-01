#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double nombre;
    while (true) {
        cout << "Entrez un nombre (0 pour quitter) : ";
        cin >> nombre;
        if (nombre == 0) {
            cout << "Programme terminé." << endl;
            break;
        }
        if (nombre < 0) {
            cout << "Le nombre doit être positif." << endl;
            continue;
        }
        cout << "La racine carrée de " << nombre << " est : " << sqrt(nombre) << endl;
    }
    return 0;
}