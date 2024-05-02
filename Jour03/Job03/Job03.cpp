#include <iostream>
using namespace std;

int main() {
    string str1, str2;

    // Demander à l'utilisateur d'entrer les deux chaînes
    cout << "Entrez la première chaîne : ";
    getline(cin, str1);

    cout << "Entrez la deuxième chaîne : ";
    getline(cin, str2);

    // Compter le nombre de lettres dans la première chaîne
    int count1 = 0;
    for (char ch : str1) {
        if (isalpha(ch)) { // Vérifier si le caractère est une lettre
            count1++;
        }
    }

    // Compter le nombre de lettres dans la deuxième chaîne
    int count2 = 0;
    for (char ch : str2) {
        if (isalpha(ch)) { // Vérifier si le caractère est une lettre
            count2++;
        }
    }

    // Comparer les nombres de lettres
    if (count1 == count2) {
        cout << "Les chaînes ont le même nombre de lettres." << endl;
    } else {
        cout << "Les chaînes n'ont pas le même nombre de lettres." << endl;
    }

    return 0;
}
