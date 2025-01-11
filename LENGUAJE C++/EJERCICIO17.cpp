#include <iostream>

using namespace std;

int main (){
int edad;
cout << "Ingresa tu edad: "; cin >> edad;

if ((edad >= 18)&& (edad <=25)){
cout << "Su edad esta entre el rango de 18 y 25 años";
}
else {
cout << "Su edad no esta entre el rango de 18 y 25 años";
}


return 0;
}
