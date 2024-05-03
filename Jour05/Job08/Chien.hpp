#ifndef CHIEN_HPP
#define CHIEN_HPP

#include "animal.hpp"

// Classe Chien qui hérite de Animal
class Chien : public Animal {
public:
    // Implémentation de la méthode crier() pour Chien
    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }
    
    // Implémentation de la méthode manger() pour Chien
    void manger() const override {
        std::cout << "Le chien a une alimentation variée." << std::endl;
    }
};

#endif /* CHIEN_HPP */
