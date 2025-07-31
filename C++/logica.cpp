#include <iostream>
using namespace std;

bool ehPar(int n) {
    return n % 2 == 0;
}

int main() {
    int numero;
    cout << "Digite um número: ";
    cin >> numero;

    if (ehPar(numero)) {
        cout << "O número é par." << endl;
    } else {
        cout << "O número é ímpar." << endl;
    }

    cout << "Contando até " << numero << ":" << endl;
    for (int i = 1; i <= numero; i++) {
        cout << i << endl;
    }

    return 0;
}
