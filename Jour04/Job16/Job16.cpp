#include <iostream>

int trouverMax(int tableau[], int taille) {
    if (taille <= 0) {
        return -1;
    }
    int max = tableau[0];
    for (int i = 1; i < taille; ++i) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }
    return max;
}

int main() {
    int tableau[6] = {5, 12, 3, 8, 9, 15}; 
    int taille = 6; 
    int valeurMax = trouverMax(tableau, taille);
    std::cout << "La valeur maximale dans le tableau est : " << valeurMax << std::endl;
    return 0;
}