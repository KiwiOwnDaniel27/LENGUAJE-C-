#include <iostream>

using namespace std;

int main (){
char letra;

cout << "Ingrese un caracter: "; cin >> letra;

switch(letra){
case 'a':
case 'e':
case 'i':
case 'o':
case 'u': cout <<"La vocal es minuscula: "; break;
default: cout << "NO Es una vocal minuscula"; break;
}


return 0;
}
