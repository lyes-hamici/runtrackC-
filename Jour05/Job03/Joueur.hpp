#include <iostream>
#include <string>

class Joueur {
private:
    int x; // position en x
    int y; // position en y
    std::string nom; // nom du joueur

public:
    // Constructeur par défaut
    Joueur() {
        x = 0;
        y = 0;
        nom = "";
    }

    // Constructeur prenant en paramètre les valeurs de “x” et “y”
    Joueur(int initialX, int initialY) {
        x = initialX;
        y = initialY;
        nom = "";
    }

    // Constructeur prenant en paramètre les valeurs de “x” et “y” ainsi que le nom du joueur
    Joueur(int initialX, int initialY, const std::string& nomJoueur) {
        x = initialX;
        y = initialY;
        nom = nomJoueur;
    }

    // Méthodes pour initialiser les valeurs des attributs
    void initialiserPosition(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Méthode pour afficher les attributs
    void afficherPosition() {
        std::cout << "Position du joueur " << nom << " : (" << x << ", " << y << ")" << std::endl;
    }

    // Méthode pour déplacer le joueur
    void deplacer(int deplacementX, int deplacementY) {
        x += deplacementX;
        y += deplacementY;
    }
};