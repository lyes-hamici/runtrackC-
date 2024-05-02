#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string input;

    // Demander à l'utilisateur d'entrer l'heure
    cout << "Entrez une heure sous le format XXhXX : ";
    getline(cin, input);

    // Définir l'expression régulière pour vérifier le format
    regex pattern("\\b[0-9]{2}h[0-9]{2}\\b");

    // Vérifier si l'entrée correspond au format
    if (regex_match(input, pattern)) {
        cout << "Format d'heure valide." << endl;
    } else {
        cout << "Format d'heure invalide." << endl;
    }

    return 0;
}