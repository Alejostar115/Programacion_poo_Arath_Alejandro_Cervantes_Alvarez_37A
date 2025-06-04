#include <iostream>
#include <cmath>
// Arath Alejandro Cervantes Alvarez 37A ISC

//Este programa hace lo mismo que el anterior (calcular área o perímetro de un círculo), pero ahora está mejor organizado usando clases

using namespace std;

class circulo{
;
private:
	double radio;

public:
	circulo(double r)
	{
	radio = r;	
	} 
	
	double calculararea()
	{
		return M_PI * pow(radio,2);
	}
	double calcularperimetro()
	{
		return 2 * M_PI * radio;
	}

};
int main (){
	char opcion;
	double radio;
	cout<<"¿Que deseas calcular? a = area, p = perimetro \n";cin>>opcion;
	cout<<"ingrese el radio del circulo \n";cin >> radio;
	circulo micirculo(radio);
	if (opcion == 'a'|| opcion == 'A'){
	cout<<"el area del circulo es \n"<< micirculo.calculararea() << endl;
} 
else if (opcion == 'p'|| opcion == 'P'){
		cout<<"el perimetro del circulo es  \n"<< micirculo.calcularperimetro() << endl;
	}
else {
			cout<<"opcion no valida \n"<< endl; 
}
	return 0;
}








		
 
