#include <iostream>

using namespace std;

int main(){
int x, y, elevacion=1;

cout << "Ingrese el valor de x: "; cin >>x;
cout << "Ingresar el valor de y: "; cin >>y;

for (int i=1; i<=y; i++){
    elevacion *= x;
}
cout << "El resultado de estos valores son: " << elevacion << endl;



return 0;
}
