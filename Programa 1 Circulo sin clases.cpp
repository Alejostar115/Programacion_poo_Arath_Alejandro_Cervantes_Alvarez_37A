#include <iostream>
#include <cmath>
//Arath Alejandro Cervantes Alvarez 37A ISC

//Pregunta al usuario qué quiere calcular: el área ('a') o el perímetro ('p') de un círculo.

//Luego pide el radio del círculo.

//Según lo que eligió el usuario, hace el cálculo correspondiente y muestra el resultado.

//Si el usuario escribe cualquier otra cosa que no sea 'a' o 'p', le dice que su opción no es válida

using namespace std;
int main(){
	char opcion;
	double radio, resultado;
	cout<<"¿Que deseas calcular? a = area, p = perimetro \n";cin >> opcion ;
	cout<<"ingrese el radio del circulo \n";cin >> radio;
	if (opcion == 'a'|| opcion == 'A'){
		resultado = M_PI * pow(radio,2);
			cout<<"el area del circulo es \n"<< resultado << endl; 
	}
	else if (opcion == 'p'|| opcion == 'P'){
		resultado = 2 * M_PI * radio;
			cout<<"el perimetro del circulo es \n"<< resultado << endl; 
}
else {
			cout<<"opcion no valida \n"<< endl; 
}
	return 0;
}
