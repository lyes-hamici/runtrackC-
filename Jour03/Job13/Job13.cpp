#include <iostream>
using namespace std;

int main() {
    // Déclaration des tableaux d'entrée et de sortie
    int tableau1[] = {1, 3, 5, 7, 9};
    int taille_tableau1 = sizeof(tableau1) / sizeof(tableau1[0]);
    
    int tableau2[] = {2, 4, 6, 8, 10};
    int taille_tableau2 = sizeof(tableau2) / sizeof(tableau2[0]);
    
    int tableauFusion[taille_tableau1 + taille_tableau2];
    int taille_tableauFusion = taille_tableau1 + taille_tableau2;

    // Indices pour parcourir les tableaux
    int i = 0, j = 0, k = 0;

    // Fusion des deux tableaux
    while (i < taille_tableau1 && j < taille_tableau2) {
        if (tableau1[i] < tableau2[j]) {
            tableauFusion[k++] = tableau1[i++];
        } else {
            tableauFusion[k++] = tableau2[j++];
        }
    }

    // Ajout des éléments restants du premier tableau s'il y en a
    while (i < taille_tableau1) {
        tableauFusion[k++] = tableau1[i++];
    }

    // Ajout des éléments restants du deuxième tableau s'il y en a
    while (j < taille_tableau2) {
        tableauFusion[k++] = tableau2[j++];
    }

    // Affichage du tableau fusionné
    cout << "Tableau fusionne : ";
    for (int idx = 0; idx < taille_tableauFusion; ++idx) {
        cout << tableauFusion[idx] << " ";
    }
    cout << endl;

    return 0;
}
