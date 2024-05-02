#include <iostream>

int main() {
    // Initialisation d'un tableau statique d'entiers avec des valeurs de choix
    int tableau[5] = {10, 20, 30, 40, 50};

    // Affichage de l'adresse de chaque élément du tableau et leur valeur
    for (int i = 0; i < 5; ++i) {
        std::cout << "Adresse de tableau[" << i << "] : " << &tableau[i] << ", valeur : " << tableau[i] << std::endl;
    }

    return 0;
}
