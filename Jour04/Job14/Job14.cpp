#include <iostream>

int main() {
    int x = 12;
    int& ref_x = x;
    std::cout << "Valeur de x avant modification : " << x << std::endl;
    ref_x = 24;
    std::cout << "Valeur de x après modification : " << x << std::endl;
    return 0;
}