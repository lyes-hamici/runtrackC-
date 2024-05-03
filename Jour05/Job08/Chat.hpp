#ifndef CHAT_HPP
#define CHAT_HPP

#include "animal.hpp"

// Classe Chat qui hérite de Animal
class Chat : public Animal {
public:
    // Implémentation de la méthode crier() pour Chat
    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }
    
    // Implémentation de la méthode manger() pour Chat
    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }
};
#endif /* CHAT_HPP */