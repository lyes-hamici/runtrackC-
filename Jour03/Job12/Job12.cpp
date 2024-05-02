#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Initialisation de la graine pour la génération de nombres aléatoires
    int nombreMystere = rand() % 101; // Génération du nombre mystère entre 0 et 100
    int nombreEssais = 10; // Nombre d'essais du joueur
    int nombreJoueur;

    cout << "Bienvenue dans le jeu Nombre Mystere !" << endl;
    cout << "Devinez le nombre mystere entre 0 et 100." << endl;
    cout << "Vous avez " << nombreEssais << " essais." << endl;

    // Boucle principale du jeu
    while (nombreEssais > 0) {
        cout << "Entrez votre proposition : ";
        cin >> nombreJoueur;

        if (nombreJoueur < nombreMystere) {
            cout << "Trop petit !" << endl;
        } else if (nombreJoueur > nombreMystere) {
            cout << "Trop grand !" << endl;
        } else {
            cout << "Felicitation ! Vous avez trouve le nombre mystere !" << endl;
            return 0; // Sortir du programme si le joueur a trouvé le nombre mystère
        }
        
        nombreEssais--;
        cout << "Il vous reste " << nombreEssais << " essais." << endl;
    }

    // Si le joueur a épuisé tous ses essais sans trouver le nombre mystère
    cout << "Vous avez perdu. Le nombre mystere etait : " << nombreMystere << endl;

    return 0;
}
