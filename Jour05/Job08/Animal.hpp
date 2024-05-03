#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

// Classe abstraite Animal
class Animal {
public:
    // Méthode virtuelle pure crier()
    virtual void crier() const = 0;
    
    // Méthode virtuelle pure manger()
    virtual void manger() const = 0;
};

#endif /* ANIMAL_HPP */
