#include<iostream>
#include<conio.h>

using namespace std;

int main(){
int n, suma=0;

cout << "Ingrese un valor: "; cin >> n;

for(int i=1; i<=n;i++){
suma += i;
}

cout << "La suma total de este valor es de: "<< suma << endl;



getch();
return 0;
}
