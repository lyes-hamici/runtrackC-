#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
private:
    static int totalAnimaux; // Membre statique pour compter le nombre total d'animaux

public:
    Animal() {
        totalAnimaux++; // Incrémenter le compteur à chaque création d'un nouvel animal
    }

    virtual ~Animal() {
        totalAnimaux--; // Décrémenter le compteur à chaque destruction d'un animal
    }

    static int getTotalAnimaux() {
        return totalAnimaux;
    }

    virtual void crier() const = 0;
    
    virtual void manger() const = 0;
};

int Animal::totalAnimaux = 0; // Initialisation du membre statique

#endif /* ANIMAL_HPP */
