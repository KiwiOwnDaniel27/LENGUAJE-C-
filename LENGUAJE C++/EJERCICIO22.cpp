#include <iostream>

using namespace std;

int main (){

int saldo_inicial=1000, opc;
float extra, saldo=0, retiro;

cout << "\tBienvenido a su cajero virtual." << endl;
cout << "1. Ingresar dinero a la cuenta." << endl;
cout << "2. Retirar dinero de la cuenta." << endl;
cout << "3. Salir." << endl;
cout << "Opcion: "; cin>> opc;

switch (opc){
case 1:
cout << "Digite la cantidad de dinero que desea ingresar a su cuenta: "; cin >> extra;
saldo = saldo_inicial+extra;
cout << "La cantidad de dinero en su cuenta es de: " << saldo; break;

case 2:
cout << "Digite la cantidad de dinero que desea retirar de su cuenta: "; cin >> retiro;
saldo = saldo_inicial - retiro;
if (retiro > saldo_inicial){
cout << "NO tiene suficiente dinero en su cuenta para realizar el retiro. ";
}
else {
cout << "Dinero disponible en su cuenta despues del retiro es de: " << saldo; break;
}
case 3: break;
}

return 0;
}
