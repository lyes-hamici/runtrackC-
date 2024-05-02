#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "vive la plateforme !";
    string result = "";

    // Parcourir chaque caractère de la chaîne
    for (char ch : str) {
        // Vérifier si le caractère n'est pas une voyelle
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            result += ch; // Si ce n'est pas une voyelle, l'ajouter au résultat
        }
    }

    cout << "Chaîne originale: " << str << endl;
    cout << "Chaîne sans voyelles: " << result << endl;

    return 0;
}
