#include <iostream>

using namespace std;

void programa1() {
    cout << "Ejecutando programa 1..." << endl;

}

void programa2() {
    cout << "Ejecutando programa 2..." << endl;

}

void programa3() {
    cout << "Ejecutando programa 3..." << endl;

}

int main() {
    int opcion;

    do {
        cout << "Menú de opciones:" << endl;
        cout << "1. Ejecutar programa 1" << endl;
        cout << "2. Ejecutar programa 2" << endl;
        cout << "3. Ejecutar programa 3" << endl;
        cout << "4. Finalizar programa" << endl;
        cout << "Ingrese su opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                programa1();
                break;
            case 2:
                programa2();
                break;
            case 3:
                programa3();
                break;
            case 4:
                cout << "Finalizando programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 4);

    return 0;
}
