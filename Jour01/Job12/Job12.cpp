#include <iostream>
using namespace std;

int main() {
    int note_total = 0; // Initialiser la somme totale à 0
    int coeff_total = 0; // Initialiser le total des coefficients à 0

    for (int i = 1; i <= 5; ++i) {
        int n, coeff;
        cout << "Entrez une note : ";
        cin >> n;
        cout << "Entrez le coefficient : ";
        cin >> coeff;

        note_total += n * coeff; // Ajouter la note multipliée par le coefficient à la somme totale
        coeff_total += coeff; // Ajouter le coefficient au total des coefficients
    }

    cout << "Moyenne total : " << note_total / coeff_total << endl;

    return 0;
}
