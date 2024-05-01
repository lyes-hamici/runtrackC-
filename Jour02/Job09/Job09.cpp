#include <iostream>

using namespace std;

int main() {
    int a, b, entier;
    cout << "Entrez la borne inférieure a : ";
    cin >> a;
    cout << "Entrez la borne supérieure b : ";
    cin >> b;
    if (a < b) {
        cout << "Entrez un entier : ";
        cin >> entier;
        if (entier >= a && entier <= b) {
            cout << "GAGNE" << endl;
        } else {
            cout << "PERDU" << endl;
        }
    } else {
        cout << "La borne inférieure ne peut pas être supérieure ou égale à la borne supérieure." << endl;
    }
    return 0;
}