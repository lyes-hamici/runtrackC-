#include <iostream>

using namespace std;

int main(){
    int i,n,som;
    som = 0;
    i = 0;
    // boucle while
    while (i < 4) {
        cout << "donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    }
    cout << "Somme : " << som;

    // boucle do while
    i = 0;
    som = 0;
    do {
        cout << "donnez un entier : ";
        cin >> n;
        som += n;
        i++;
    } while (i < 4);
}