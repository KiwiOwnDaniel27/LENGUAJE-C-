#include <iostream>

using namespace std;

int main (){
int num1, num2, num3, num4;

cout << "Ingresar 4 numeros: "; cin >> num1 >> num2 >> num3 >> num4;

if ((num1=num4)&&(num2=num4)&&(num3=num4)){
cout << "El 4to numero ingresado coincide con el numero: " << num4;
}
else {
cout << "El 4to numero ingresado no coincide con ningun numero";
}


return 0;
}
