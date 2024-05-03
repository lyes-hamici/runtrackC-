#include <iostream>
#include <string>

class Personne {
private:
    std::string nom;
    int pointsDeVie;
    float defense;

public:
    // Constructeur avec liste d'initialisation
    Personne(std::string _nom, int _pointsDeVie, float _defense)
        : nom(_nom), pointsDeVie(_pointsDeVie), defense(_defense) {}

    // Méthodes pour afficher les informations du personnage
    void afficherInfos() {
        std::cout << "------------------------------" << std::endl;
        std::cout << "Nom: " << nom << std::endl;
        std::cout << "Points de vie: " << pointsDeVie << std::endl;
        std::cout << "Défense: " << defense << std::endl;
        std::cout << "------------------------------" << std::endl;
    }

    // Méthodes pour modifier les informations du personnage
    void modifierNom(std::string nouveauNom) {
        nom = nouveauNom;
    }

    void modifierPointsDeVie(int nouveauxPoints) {
        pointsDeVie = nouveauxPoints;
    }

    void modifierDefense(float nouvelleDefense) {
        defense = nouvelleDefense;
    }


};