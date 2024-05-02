#include <iostream>
#include <string>
using namespace std;

void trierChaine(string& chaine) {
    int longueur = chaine.length();
    for (int i = 0; i < longueur - 1; ++i) {
        for (int j = i + 1; j < longueur; ++j) {
            if (chaine[i] > chaine[j]) {
                char temp = chaine[i];
                chaine[i] = chaine[j];
                chaine[j] = temp;
            }
        }
    }
}

int main() {
    string chaine1, chaine2 = "Bonjour";

    cout << "Entrez une chaine de caracteres : ";
    getline(cin, chaine1);

    // Tri de la première chaîne
    trierChaine(chaine1);
    // Tri de la deuxième chaîne
    trierChaine(chaine2);

    cout << "Chaine 1 trie : " << chaine1 << endl;
    cout << "Chaine 2 trie : " << chaine2 << endl;

    return 0;
}
