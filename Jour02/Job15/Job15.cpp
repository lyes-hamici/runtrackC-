#include <iostream>

using namespace std;

int main() {
    int limite;
    int a = 0, b = 1, temp;
    cout << "Entrez la limite de la suite de Fibonacci : ";
    cin >> limite;
    cout << "Suite de Fibonacci jusqu'à la limite " << limite << " : ";
    cout << a << b;
    while (a + b <= limite) {
        temp = a + b;
        cout << temp;
        a = b;
        b = temp;
    }
    cout << endl;
    return 0;
}