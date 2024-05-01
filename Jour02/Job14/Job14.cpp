#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int nombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;
    int nombreChiffres = 0;
    int temp = nombre;
    while (temp != 0) {
        temp /= 10;
        nombreChiffres++;
    }
    int somme = 0;
    temp = nombre;
    while (temp != 0) {
        int chiffre = temp % 10;
        somme += pow(chiffre, nombreChiffres);
        temp /= 10;
    }
    if (somme == nombre) {
        cout << nombre << " est un nombre narcissique." << endl;
    } else {
        cout << nombre << " n'est pas un nombre narcissique." << endl;
    }
    return 0;
}