#include <iostream>
#include <conio.h>

using namespace std;

int main (){
int numero, conteo=0;

do {
cout << "Ingresar un numero: "; cin>> numero;
if (numero > 0){
conteo++;
}
} while (numero !=0);

cout << "La cantidad de numeros leidos mayores a 0 son: " << conteo << endl;

getch();
return 0;
}
