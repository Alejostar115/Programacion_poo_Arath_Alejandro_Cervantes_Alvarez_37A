#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Arath Alejandro Cervantes Alvarez 37A ISC
//programa permite al usuario ingresar 10 valores numéricos, los almacena en un vector, los ordena de menor a mayor

int main() {
    vector<double> numeros;
    double valor;

    cout << "Ingrese 10 valores numericos:\n";

    for (int i = 0; i < 10; ++i) {
        cout << "Valor " << i + 1 << ": ";
        cin >> valor;
        numeros.push_back(valor);
    }

    sort(numeros.begin(), numeros.end());

    cout << "\nValores ordenados:\n";
    for (size_t i = 0; i < numeros.size(); ++i) {
        cout << numeros[i] << " ";
    }

    cout << endl;
    return 0;
}

