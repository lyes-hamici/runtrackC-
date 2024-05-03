#ifndef CHAT_HPP
#define CHAT_HPP

#include "animal.hpp"
#include <iostream>
#include <string>

class Chat : public Animal {
public:
    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }

    // Nouvelle surcharge de la méthode manger() avec un paramètre
    void manger(const std::string& aliment) const {
        if (aliment.empty()) {
            std::cout << "Le chat a faim mais ne sait pas quoi manger." << std::endl;
        } else if (aliment == "des croquettes") {
            std::cout << "Le chat mange des croquettes." << std::endl;
        } else {
            std::cout << "Le chat mange du poisson." << std::endl;
        }
    }
};

#endif /* CHAT_HPP */
