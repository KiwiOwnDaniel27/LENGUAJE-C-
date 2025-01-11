#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese una sucesión de números enteros (-1 para salir):" << endl;

    while (true)
    {
        cout << "Número: ";
        cin >> num;

        if (num == -1)
        {
            break; // Salir del bucle si se ingresa -1
        }

        cout << "Número ingresado: " << num << endl;
    }

    cout << "Fin del programa." << endl;

    return 0;
}
