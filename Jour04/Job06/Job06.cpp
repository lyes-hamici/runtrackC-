#include <iostream>

int main() {
    // Création des variables
    int entier = 17;
    float flottant = 3.14;
    double reel = 123.345;
    const char* caractere = "La Plateforme";

    // Affichage des adresses mémoire et des valeurs des variables
    std::cout << "Adresse de la variable 'entier' : " << &entier << ", valeur : " << entier << std::endl;
    std::cout << "Adresse de la variable 'flottant' : " << &flottant << ", valeur : " << flottant << std::endl;
    std::cout << "Adresse de la variable 'reel' : " << &reel << ", valeur : " << reel << std::endl;
    std::cout << "Adresse de la variable 'caractere' : " << (void*)&caractere << ", valeur : " << caractere << std::endl;

    return 0;
}
