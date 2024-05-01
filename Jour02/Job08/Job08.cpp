#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Entrez la borne inférieure a : ";
    cin >> a;
    cout << "Entrez la borne supérieure b : ";
    cin >> b;
    if (a <= b) {
        cout << "Les entiers de " << a << " à " << b << " sont : ";
        int current = a;
        while (current <= b) {
            cout << current << " ";
            current++;
        }
        cout << endl;
    } else {
        cout << "La borne inférieure ne peut pas être supérieure à la borne supérieure." << endl;
    }
    return 0;
}