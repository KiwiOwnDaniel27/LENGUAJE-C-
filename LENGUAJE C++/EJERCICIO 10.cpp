#include <iostream>

using namespace std;

int main (){

int numero;
cout << "Ingresa un numero del 1 a 5: "; cin >> numero;

switch (numero){
case 1: cout << "El numero ingresado es el numero 1"; break;
case 2: cout << "El numero ingresado es el numero 2"; break;
case 3: cout << "El numero ingresado es el numero 3"; break;
case 4: cout << "El numero ingresado es el numero 4"; break;
case 5: cout << "El numero ingresado es el numero 5"; break;

default: cout << "El numero ingresado supera el rango de 1 a 5"; break;
}


return 0;
}
