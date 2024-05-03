#include "Joueur.hpp"

int main() {
    // Instanciation de la classe Joueur avec le deuxième constructeur
    Joueur joueurAvecValeursInitiales(10, 20);

    // Affichage de la position initiale du joueur
    joueurAvecValeursInitiales.afficherPosition();

    // Déplacement du joueur
    joueurAvecValeursInitiales.deplacer(5, -3);

    // Affichage de la nouvelle position du joueur après le déplacement
    joueurAvecValeursInitiales.afficherPosition();

    return 0;
}
