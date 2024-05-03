#include <iostream>

class Joueur {
private:
    int x; // position en x
    int y; // position en y

public:
    // Constructeur
    Joueur() {
        x = 0;
        y = 0;
    }

    // Méthodes pour initialiser les valeurs des attributs
    void initialiserPosition(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Méthode pour afficher les attributs
    void afficherPosition() {
        std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
    }

    // Méthode pour déplacer le joueur
    void deplacer(int deplacementX, int deplacementY) {
        x += deplacementX;
        y += deplacementY;
    }
};
