#include <iostream>

using namespace std;
int sumad (int n);
int num;
int resultado;

int main (){
cout << "Ingrese un numero entero positivo:  ";
cin >> num;
resultado = sumad(num);

cout << "La suma de los digitos es: " << resultado;
return 0;
}

int sumad (int n) {
int suma, aux;
while (n!=0) {
aux=n%10;
n/=10;
suma+=aux;
}
return suma;
}
