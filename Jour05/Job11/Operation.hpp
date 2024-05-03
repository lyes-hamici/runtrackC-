#ifndef OPERATION_HPP
#define OPERATION_HPP

#include <iostream>

class Operation {
private:
    double valeur;

public:
    // Constructeurs
    Operation() : valeur(0) {}
    Operation(double v) : valeur(v) {}

    // Surcharge des opérateurs
    Operation operator+(const Operation& autre) const {
        return Operation(valeur + autre.valeur);
    }

    Operation operator-(const Operation& autre) const {
        return Operation(valeur - autre.valeur);
    }

    Operation operator*(const Operation& autre) const {
        return Operation(valeur * autre.valeur);
    }

    Operation operator/(const Operation& autre) const {
        if (autre.valeur != 0) {
            return Operation(valeur / autre.valeur);
        } else {
            std::cerr << "Erreur : Division par zéro !" << std::endl;
            return Operation(); // Retourne une opération avec la valeur par défaut
        }
    }

    // Méthode pour afficher la valeur
    void afficher() const {
        std::cout << "La valeur du calcul est : " << valeur << std::endl;
    }
};

#endif // OPERATION_HPP
