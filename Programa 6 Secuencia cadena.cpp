#include <iostream>
#include <string>

using namespace std;

//Arath Alejandro Cervantes Alvarez 37A ISC


enum State { S1, S2, S3, S4 };

State transition(State current, char input) {
    switch (current) {
        case S1:
            if (input == 'a') return S2;
            if (input == 'b') return S3;
            break;
        case S2:
            if (input == 'a') return S2;
            if (input == 'c') return S4;
            break;
        case S3:
            if (input == 'a') return S1;
            if (input == 'b') return S4;
            break;
        case S4:
            if (input == 'd') return S3;
            break;
    }
    return static_cast<State>(-1);
}

string getStateName(State state) {
    switch (state) {
        case S1: return "S1";
        case S2: return "S2";
        case S3: return "S3";
        case S4: return "S4";
        default: return "ERROR";
    }
}

int main() {
    string input;
    cout << "Ingresa una cadena: ";
    cin >> input;

    State current = S1;
    cout << "Estado inicial: " << getStateName(current) << endl;

    for (int i = 0; i < input.length(); i++) {
        char ch = input[i];
        State next = transition(current, ch);
        if (next == -1) {
            cout << "Error: No hay transición desde " << getStateName(current)
                 << " con entrada '" << ch << "'" << endl;
            cout << "Cadena NO aceptada." << endl;
            return 0;
        }
        cout << "Con '" << ch << "' ? " << getStateName(next) << endl;
        current = next;
    }

    if (current == S4) {
        cout << "Cadena ACEPTADA." << endl;
    } else {
        cout << "Cadena NO aceptada." << endl;
    }

    return 0;
}

