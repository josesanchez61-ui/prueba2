#include <iostream>
using namespace std;

int main() {
    int edad;
    int tieneLicencia;

    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;

        cout << "¿Tienes licencia? (1 = Si, 0 = No): ";
        cin >> tieneLicencia;

        if (tieneLicencia == 1) {
            cout << "Puedes conducir." << endl;
        }
        else {
            cout << "No puedes conducir porque no tienes licencia." << endl;
        }
    }
    else {
        cout << "Eres menor de edad y no puedes conducir." << endl;
    }

    return 0;
}
