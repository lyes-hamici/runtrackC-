#include <iostream>

int main() {
    // Créer une variable "number" contenant 2019
    int number = 2019;

    // Déclarer un pointeur et le faire pointer vers la variable "number"
    int *numberp = &number;

    // Afficher la valeur de "number" à l'aide du pointeur
    std::cout << "La valeur de number est : " << *numberp << std::endl;

    return 0;
}
