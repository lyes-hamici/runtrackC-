#include <string>
#include <iostream>

class Contact {
private:
    std::string nom;
    int numero;

public:
    // Constructeur prenant un nom et un numéro de téléphone
    Contact(const std::string& nom, int numero) : nom(nom), numero(numero) {}

    // Constructeur de copie
    Contact(const Contact& autre) : nom(autre.nom), numero(autre.numero) {}

    // Méthode pour modifier le numéro de téléphone
    void modifierNumero(int nouveauNumero) {
        numero = nouveauNumero;
    }

    // Méthode pour afficher les informations du contact
    void afficherInfos() const {
        std::cout << "------------------------------" << std::endl;
        std::cout << "Nom: " << nom << ", Numéro de téléphone: " << numero << std::endl;
        std::cout << "------------------------------" << std::endl;
    }
};
