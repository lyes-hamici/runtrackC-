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
        this->x = 0;
        this->y = 0;
        this->nom = "";
    }

    // Constructeur prenant en paramètre les valeurs de “x” et “y”
    Joueur(int initialX, int initialY) {
        this->x = initialX;
        this->y = initialY;
        this->nom = "";
    }

    // Constructeur prenant en paramètre les valeurs de “x” et “y” ainsi que le nom du joueur
    Joueur(int initialX, int initialY, const std::string& nomJoueur) {
        this->x = initialX;
        this->y = initialY;
        this->nom = nomJoueur;
    }

    // Méthode pour initialiser les valeurs des attributs
    void initialiserPosition(int x, int y) {
        this->x = x;
        this->y = y;
    }

    // Méthode pour afficher les attributs
    void afficherPosition() {
        std::cout << "Position du joueur " << this->nom << " : (" << this->x << ", " << this->y << ")" << std::endl;
    }

    // Méthode pour déplacer le joueur
    void deplacer(int deplacementX, int deplacementY) {
        this->x += deplacementX;
        this->y += deplacementY;
    }

    // Méthode pour définir le nom du joueur
    void definirNom(const std::string& nom) {
        this->nom = nom;
    }

    // Méthode pour obtenir le nom du joueur
    std::string obtenirNom() {
        return this->nom;
    }
};