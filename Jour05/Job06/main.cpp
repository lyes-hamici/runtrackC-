#include "Personne.hpp"

int main() {
    // Création d'un personnage avec des valeurs initiales
    Personne joueur1("Abarax", 100, 0.5);
    joueur1.afficherInfos();

    // Modification des informations du personnage
    joueur1.modifierNom("Myrturtle");
    joueur1.modifierPointsDeVie(80);
    joueur1.modifierDefense(0.8);
    joueur1.afficherInfos();

    return 0;
}
