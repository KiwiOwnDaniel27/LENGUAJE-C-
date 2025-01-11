#include <iostream>
#include <math.h>
using namespace std;

int main (){

int opc, num;
float cubo= 0, numero;

cout << "\t Bienvenido a nuestro menu de matematicas :D "<< endl;
cout << "1. Cubo de un numero."<< endl;
cout << "2. Numero par o impar."<< endl;
cout << "3. Salir." << endl;
cout << "Opcion: " ; cin >> opc;

switch (opc){
case 1:
cout << "Ingrese el valor del numero: "; cin >> num;
cubo = pow(num,3);
cout << "El cubo de ese numero es: " << cubo; break;

case 2:
cout << "Ingrese un numero: "; cin >> numero;

if(numero/2==0){
cout << "El numero es par.";
}
else {
cout << "El numero es impar."; break;
}

case 3: break;
}

return 0;
}
