#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main (){
float c1, c2, h=0;
cout << "Digite el valor del primer cateto: "; cin>> c1;
cout << "Digite el valor del segundo cateto: "; cin>> c2;

c1= c1*c1;
c2= c2*c2;
h= sqrt (c1 + c2);

cout.precision(3);
cout <<"\nEl Valor de la hipotenusa es: " << h << endl;

return 0;
}
