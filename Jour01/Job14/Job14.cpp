#include <iostream>

using namespace std;

int main() {
    int nombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;

    int nombre_inverse = 0;
    int reste;

    // Inversion du nombre
    while (nombre != 0) {
        reste = nombre % 10;
        nombre_inverse = nombre_inverse * 10 + reste;
        nombre = nombre / 10;
    }

    cout << "Le nombre inverse est : " << nombre_inverse << endl;

    return 0;
}
