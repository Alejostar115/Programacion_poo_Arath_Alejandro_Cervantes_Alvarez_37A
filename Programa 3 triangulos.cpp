#include <iostream>
using namespace std;

//Arath Alejandro Cervantes Alvarez 37A ISC

//Este programa determina qué tipo de triángulo tienes con solo darle las medidas de sus 3 lados. Además, verifica si los lados pueden formar un triángulo válido (porque no todas las combinaciones funcionan).

int main() {
    float lado1, lado2, lado3;

    cout << "Ingrese el primer lado del triangulo: ";
    cin >> lado1;
    cout << "Ingrese el segundo lado del triangulo: ";
    cin >> lado2;
    cout << "Ingrese el tercer lado del triangulo: ";
    cin >> lado3;

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
        if (lado1 == lado2 && lado2 == lado3) {
            cout << "El triángulo es equilatero." << endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            cout << "El triangulo es isosceles." << endl;
        } else {
            cout << "El triangulo es escaleno." << endl;
        }
    } else {
        cout << "Los lados no forman un triangulo valido." << endl;
    }

    return 0;
}

