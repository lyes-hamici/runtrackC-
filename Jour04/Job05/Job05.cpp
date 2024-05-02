#include <iostream>

// Déclaration de la structure "Point"
struct Point {
    int x;
    int y;
};

int main() {
    // Déclaration d'une variable de type "Point"
    Point myPoint;

    // Déclaration d'un pointeur vers la structure "Point"
    Point *ptrPoint = &myPoint;

    // Accéder aux membres de la structure à travers le pointeur et modifier les valeurs de "x" et "y"
    ptrPoint->x = 5;
    ptrPoint->y = 10;

    // Affichage des valeurs de "x" et "y"
    std::cout << "La valeur de x est : " << ptrPoint->x << std::endl;
    std::cout << "La valeur de y est : " << ptrPoint->y << std::endl;

    return 0;
}
