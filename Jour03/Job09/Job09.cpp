#include <iostream>
#include <string>
using namespace std;

bool estIncluse(string chaine1, string chaine2) {
    int longueur1 = chaine1.length();
    int longueur2 = chaine2.length();

    if (longueur1 > longueur2) {
        return false; // La première chaîne ne peut pas être incluse si elle est plus longue que la deuxième
    }

    for (int i = 0; i <= longueur2 - longueur1; ++i) {
        bool incluse = true;
        for (int j = 0; j < longueur1; ++j) {
            if (chaine2[i + j] != chaine1[j]) {
                incluse = false;
                break;
            }
        }
        if (incluse) {
            return true;
        }
    }
    return false;
}

int main() {
    string chaine1, chaine2;

    cout << "Entrez la premiere chaine : ";
    getline(cin, chaine1);

    cout << "Entrez la deuxieme chaine : ";
    getline(cin, chaine2);

    if (estIncluse(chaine1, chaine2)) {
        cout << "La premiere chaine est incluse dans la deuxieme." << endl;
    } else {
        cout << "La premiere chaine n'est pas incluse dans la deuxieme." << endl;
    }

    return 0;
}
