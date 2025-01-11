#include <iostream>
#include <conio.h>

using namespace std;

int main (){
float temperatura, suma_temperatura=0, temperatura_media;
float temperatura_alta=0, temperatura_baja=999;

for (int i=0; i<24; i+=4){
cout << "Ingresar la temperatura en el horario de" << i << ":"; cin >> temperatura;

suma_temperatura += temperatura;

if (temperatura > temperatura_alta){
    temperatura_alta = temperatura;
}
if (temperatura < temperatura_baja){
    temperatura_baja = temperatura;
}
}

cout << "La temperatura mayor es de:" << temperatura_alta << endl;
cout << "La temperatura menor es de:" << temperatura_baja << endl;
cout << "La temperatura media es de:" << suma_temperatura/6 << endl;

getch();
return 0;
}
