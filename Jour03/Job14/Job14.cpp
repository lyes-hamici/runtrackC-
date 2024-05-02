#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool estPalindrome(const string& chaine) {
    int debut = 0;
    int fin = chaine.size() - 1;

    while (debut < fin) {
        if (chaine[debut] != chaine[fin]) {
            return false;
        }
        ++debut;
        --fin;
    }
    return true;
}

int main() {
    vector<string> tab = {"radar", "hello", "lvel", "stats", "world"};
    cout << "Palindromes trouves dans le tableau :" << endl;
    for (const string& chaine : tab) {
        if (estPalindrome(chaine)) {
            cout << chaine << endl;
        }
    }
    return 0;
}