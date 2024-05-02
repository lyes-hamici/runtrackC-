#include <iostream>

int main() {
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;
    int* tableau = new int[taille];
    std::cout << "Entrez les valeurs pour chaque element du tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i << " : ";
        std::cin >> tableau[i];
    }
    std::cout << "Contenu du tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i << " : " << tableau[i] << std::endl;
    }
    delete[] tableau;
    return 0;
}