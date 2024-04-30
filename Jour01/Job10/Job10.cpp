#include <iostream>
using namespace std;

int main() {
    double prixHT, poidsKg, tauxTVA;

    // Demander à l'utilisateur de saisir le prix HT, le poids en kilogrammes et le taux de TVA
    cout << "Entrez le prix HT d'un kilo de carottes : ";
    cin >> prixHT;
    cout << "Entrez le nombre de kilos de carottes : ";
    cin >> poidsKg;
    cout << "Entrez le taux de TVA en pourcentage (ex : 15 pour 15%) : ";
    cin >> tauxTVA;

    // Calcul du prix TTC
    double prixTTC = prixHT * poidsKg * (1 + tauxTVA / 100.0);

    // Afficher le prix TTC
    cout << "Le prix TTC pour " << poidsKg << " kilos de carottes est de : " << prixTTC << " euros." << endl;

    return 0;
}
