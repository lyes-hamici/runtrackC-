#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    string chaine;

    cout << "Entrez une chaine de caractères : ";
    getline(cin, chaine);

    char tab[chaine.size() + 1];
    for (int i = 0; i < chaine.size(); i++){
        tab[i] = chaine[i];
        cout << tab[i] << endl;
    }
    return 0;
}