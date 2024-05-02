#include <iostream>
#include <string>
#include <vector>

using namespace std;
struct Vol {
    string destination;
    int tempsVol;
};

int main() {
    vector<Vol*> vols;
    char continuer;
    do {
        string destination;
        int tempsVol;
        cout << "Entrez la destination : ";
        cin >> destination;
        cout << "Entrez le temps de vol (en heures) depuis Marseille : ";
        cin >> tempsVol;
        Vol* nouveauVol = new Vol;
        nouveauVol->destination = destination;
        nouveauVol->tempsVol = tempsVol;
        vols.push_back(nouveauVol);
        cout << "Voulez-vous ajouter un autre vol ? (O/N) : ";
        cin >> continuer;
    } while (continuer == 'O' || continuer == 'o');
    for (Vol* vol : vols) {
        cout << "Destination : " << vol->destination << ", Temps de vol : " << vol->tempsVol << " heures" << endl;
                int nouveauTempsVol;
    }
    for (Vol* vol : vols) {
        delete vol;
    }
    return 0;
}