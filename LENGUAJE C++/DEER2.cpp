#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese una sucesi�n de n�meros enteros (-1 para salir):" << endl;

    while (true)
    {
        cout << "N�mero: ";
        cin >> num;

        if (num == -1)
        {
            break; // Salir del bucle si se ingresa -1
        }

        cout << "N�mero ingresado: " << num << endl;
    }

    cout << "Fin del programa." << endl;

    return 0;
}
