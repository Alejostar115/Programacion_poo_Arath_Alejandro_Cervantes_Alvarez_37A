#include <iostream>
#include <cmath> // Para la función pow()
#include <iomanip> // Para formatear la salida

using namespace std;

//Arath Alejandro Cervantes Alvarez 37A ISC


int main() {
    const double deposito_mensual = 1000.0;
    const double tasa_interes_mensual = 0.03; // 3%
    const int anios = 10;
    const int meses = anios * 12;
    
    double valor_futuro = 0.0;
    
    // Método 1: Usando la fórmula matemática directa
    valor_futuro = deposito_mensual * ( (pow(1 + tasa_interes_mensual, meses) - 1) / tasa_interes_mensual );
    
    cout << fixed << setprecision(2); // Formato para mostrar 2 decimales
    cout << "Metodo 1 (Formula directa):" << endl;
    cout << "Despues de " << anios << " años, tendrás ahorrado: $" << valor_futuro << endl;
    
    // Método 2: Calculando mes por mes (simulación)
    double ahorro = 0.0;
    for (int mes = 1; mes <= meses; ++mes) {
        ahorro += deposito_mensual;
        ahorro *= (1 + tasa_interes_mensual);
    }
    
    cout << "\nMetodo 2 (Simulacion mes a mes):" << endl;
    cout << "Despues de " << anios << " años, tendrás ahorrado: $" << ahorro << endl;
    
    return 0;
}

