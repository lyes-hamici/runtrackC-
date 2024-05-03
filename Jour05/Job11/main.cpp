#include "Operation.hpp"

int main() {
    // Exemple d'utilisation
    Operation a(10);
    Operation b(10);

    Operation resultat;

    resultat = a + b;
    resultat.afficher();

    resultat = a - b;
    resultat.afficher();

    resultat = a * b;
    resultat.afficher();

    resultat = a / b;
    resultat.afficher();

    return 0;
}
