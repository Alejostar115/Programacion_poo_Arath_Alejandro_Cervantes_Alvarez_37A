#include <iostream>
#include <string>

using namespace std;

//Arath Alejandro Cervantes Alvarez 37A ISC
//sistema de clases para representar diferentes tipos de animales (mamíferos, insectos y aves) usando herencia

class Animal {  // Cambiado a mayúscula para coincidir con el constructor
protected:
    string color;
    bool tieneCola;
    bool tiene4Patas;  // Nombre consistente con 'P' mayúscula
    string tipoAlimentacion;
    
public:
    Animal(string c, bool cola, bool patas, string alimentacion) {
        color = c;
        tieneCola = cola;
        tiene4Patas = patas;  // Usando el mismo nombre aquí
        tipoAlimentacion = alimentacion;
    }

    void dormir() {
        cout << "Este animal duerme: " << endl;
    }
    void mostrarDatos() {
        cout << "color: " << color << endl;
        cout << "Tiene cola: " << (tieneCola ? "Si" : "No") << endl;
        cout << "Tiene 4 patas: " << (tiene4Patas ? "Si" : "No") << endl;  // Corregido aquí
        cout << "Tipo de alimentacion: " << tipoAlimentacion << endl; 
    }
};

class Insecto : public Animal {
public:
    Insecto(string c, bool cola, string alimentacion)
        : Animal(c, cola, false, alimentacion) {}
};

class Mamifero : public Animal {
public:
    Mamifero(string c, bool cola, string alimentacion)
        : Animal(c, cola, true, alimentacion) {}
};

class Pajaro : public Animal {
public:
    Pajaro(string c, bool cola, string alimentacion)
        : Animal(c, cola, false, alimentacion) {}
};

int main() {
    Mamifero perro("marrón", true, "omnivoro");
    Insecto abeja("amarillo y negro", true, "herbivoro");
    Pajaro loro("verde", true, "herbivoro");
    
    cout << "--- Perro ---" << endl;
    perro.mostrarDatos();
    perro.dormir();
    
    cout << "\n --- Abeja ---" << endl;
    abeja.mostrarDatos();
    abeja.dormir();
    
    cout << "\n --- Loro ---" << endl;
    loro.mostrarDatos();
    loro.dormir();
    
    return 0;
}

