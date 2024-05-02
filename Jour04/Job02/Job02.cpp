#include <iostream>

int main() {
    // Créer deux variables contenant des entiers
    int a = 17;
    int b = 12;

    // Déclarer des pointeurs et leur faire pointer sur les variables respectives
    int *norman = &a;
    int *megapyx = &b;

    // Échanger les valeurs à l'aide des pointeurs
    int temp = *norman;
    *norman = *megapyx;
    *megapyx = temp;

    // Afficher les nouvelles valeurs des variables
    std::cout << "La nouvelle valeur de a est : " << a << std::endl;
    std::cout << "La nouvelle valeur de b est : " << b << std::endl;

    return 0;
}
