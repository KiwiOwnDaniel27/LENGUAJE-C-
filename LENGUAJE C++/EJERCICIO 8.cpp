#include <iostream>
#include <math.h>

using namespace std;

int main(){

float a, b, c, x=0;

cout << "Ingrese el valor de a: "; cin >> a;
cout << "Ingrese el valor de b: "; cin >> b;
cout << "Ingrese el valor de c: "; cin >> c;

x = (-b + (sqrt(pow (b,2))-4*a*c))/(2*a);


cout << "\nEl valor de x es: " << x << endl;


return 0;
}

