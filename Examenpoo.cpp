#include <iostream>

using namespace std;

enum Estado {
    OFF, IDLE, SOAK, RINSE, DRAIN, DRY
};

Estado estado = OFF;
string plan = "regular";

void esperar(string mensaje) {
    cout << mensaje << endl;
    for (long i = 0; i < 500000000; i++) {

    }
}

void cambiarEstado(Estado nuevo) {
    estado = nuevo;

    switch (estado) {
        case OFF:
            cout << "Lavadora apagada.\n";
            break;
        case IDLE:
            cout << "Modo en espera.\n";
            break;
        case SOAK:
            esperar("Remojando (30 minutos)");
            cambiarEstado(RINSE);
            break;
        case RINSE:
            esperar("Enjuagando (30 Minutos)");
            cambiarEstado(DRAIN);
            break;
        case DRAIN:
            esperar("Drenando (5 Minutos)");
            if (plan != "super delicado") {
                cambiarEstado(DRY);
            } else {
                cambiarEstado(OFF);
            }
            break;
        case DRY:
            esperar("Secado...(20 Minutos)\n");
            cambiarEstado(OFF);
            break;
    }
}

int main() {
    int opcion;
    char repetir;

    do {
        cout << "Selecciona el plan de lavado:\n";
        cout << "1. Regular\n";
        cout << "2. Delicate\n";
        cout << "3. Super Delicado\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                plan = "regular";
                break;
            case 2:
                plan = "delicado";
                break;
            case 3:
                plan = "super delicado";
                break;
            default:
                cout << "Opción inválida. Usando plan regular.\n";
                plan = "regular";
        }

        cout << "\nEncendiendo lavadora con plan: " << plan << "\n";
        cambiarEstado(IDLE);
        cambiarEstado(SOAK);

        cout << "\n¿Deseas realizar otro ciclo de lavado? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');

    cout << "\nLavadora apagada. Gracias por usar el sistema.\n";
    return 0;
}
