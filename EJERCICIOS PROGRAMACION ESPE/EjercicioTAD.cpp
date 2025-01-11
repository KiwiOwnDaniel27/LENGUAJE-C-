#include <iostream>
#include <string>

using namespace std;
class Persona {
private:
string nombre;
int edad;
double sueldo;

public:

Persona() : nombre (""), edad(0), sueldo (0.0) {}

void ingresarDatos() {

cout << "Ingrese el nombre: ";
cin >> nombre;

cout << "Ingrese la edad: ";
cin >> edad;

cout << "Ingrese el sueldo ";
cin >> sueldo;
}

void mostrarDatos() const {

cout << "Nombre: " << nombre << endl;
cout << "Edad: " << edad << endl;
cout << "Sueldo" << sueldo << endl;
}
};

int main(){

Persona personas [3];

for (int i = 0; i < 3; i++) {
cout << "\nIngresar datos para la persona: " << i + 1 << ":\n";
personas [i].ingresarDatos();
}

cout << "\nDatos ingresados:\n ";
for (int i = 0; i < 3; i++) {
cout << "\nPersona " << i + 1 << ":\n";
personas [i].mostrarDatos();
cout << "----------------------\n";
}
return 0;

}
