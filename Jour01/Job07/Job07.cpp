#include <iostream>

int main() {
    int nombre;

    std::cout << "Entrez un entier : ";
    std::cin >> nombre;

    if (nombre % 2 == 0){
        std::cout << nombre << " est paire" << std::endl;
    }
    else{
        std::cout << nombre << " est impaire" << std::endl;
    }
    return 0;
}
