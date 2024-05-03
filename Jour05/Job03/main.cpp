// main.cpp

#include "Joueur.hpp"

int main() {
    // Instanciation de la classe Joueur avec le constructeur par défaut
    Joueur joueurParDefaut;
    joueurParDefaut.afficherPosition(); // Affichera la position par défaut (0, 0)

    // Instanciation de la classe Joueur avec le constructeur prenant en paramètre les valeurs de "x" et "y"
    Joueur joueurAvecPosition(10, 20);
    joueurAvecPosition.afficherPosition(); // Affichera la position (10, 20)

    // Instanciation de la classe Joueur avec le constructeur prenant en paramètre les valeurs de "x", "y" et le nom du joueur
    Joueur joueurAvecNom(5, 15, "Abarax");
    joueurAvecNom.afficherPosition(); // Affichera la position (5, 15) et le nom "Abarax"

    return 0;
}
