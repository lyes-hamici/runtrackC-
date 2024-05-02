#include <iostream>

int main() {
    int tableau[5] = {1, 2, 3, 4, 5};
    std::cout << "Valeurs du tableau :" << std::endl;
    for (int& valeur : tableau) {
        std::cout << valeur << " ";
    }
    std::cout << std::endl;
    return 0;
}