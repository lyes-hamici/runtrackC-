#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Entrez un entier N : ";
    cin >> N;

    int somme_cubes = 0;

    // Calculer la somme des cubes de 5^3 à N^3
    for (int i = 5; i <= N; ++i) {
        somme_cubes += i * i * i;
    }

    cout << "La somme des cubes de 5^3 à " << N << "^3 est : " << somme_cubes << endl;

    return 0;
}
