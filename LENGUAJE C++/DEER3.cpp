#include <iostream>

using namespace std;

int main() {
    int edad;
    float ingresos;
    float bono = 0.0;

    // Pedir al usuario que ingrese su edad y ingresos
    cout << "Ingrese su edad: ";
    cin >> edad;
    cout << "Ingrese sus ingresos mensuales: ";
    cin >> ingresos;

    // Verificar si cumple con las condiciones
    if (edad >= 65 && ingresos <= 460) {
        if (edad >= 65 && edad <= 67) {
            bono = 20.0;
        } else if (edad >= 68 && edad <= 72) {
            bono = 30.0;
        } else if (edad > 72) {
            bono = 40.0;
        }
        cout << "Usted tiene derecho a un bono de $" << bono << " por su edad y ingresos." << endl;
    } else {
        cout << "No cumple con las condiciones para recibir un bono." << endl;
    }

    return 0;
}
