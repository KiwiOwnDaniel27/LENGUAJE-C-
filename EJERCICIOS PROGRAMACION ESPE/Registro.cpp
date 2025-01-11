#include <iostream>
#include <fstream>
#include <string>

using namespace std;
class Persona {
private:
string nombre;
int edad;
double sueldo;

public:

Persona (const string& nombre, int edad, double sueldo) : nombre (nombre), edad (edad), sueldo (sueldo) {}

void escribirEnArchivo (ofstream& archivo) const {
archivo << nombre << "," << edad << "," << sueldo << "\n";
}

bool sueldoMayorA1000 () const {
return sueldo > 1000;
}

};

int main (){

ofstream archivoEntrada("datos_personas.txt");

if (archivoEntrada.is_open()) {

Persona personal("Juan", 25, 1200.50);
Persona persona2("Maria", 30, 800.75);
Persona persona3("Carlos", 28, 1500.20);

personal.escribirEnArchivo(archivoEntrada);
persona2.escribirEnArchivo(archivoEntrada);
persona3.escribirEnArchivo(archivoEntrada);

archivoEntrada.close();

} else {
cerr << "Error al abrir el archivo de entrada." << endl;
return 1;
}

ifstream archivoSalida ("datos_personas.txt");
ofstream informe ("informe_sueldo.txt");

if (archivoSalida.is_open() && informe.is_open()) {
string linea;

while (getline (archivoSalida, linea)) {
size_t coma1 = linea.find  (',');
size_t coma2 = linea.find  (',', coma1 + 1);

string nombre = linea.substr(0, coma1);
int edad = stoi(linea.substr(coma1 + 1, coma2 - coma1 - 1));
double sueldo = stod(linea.substr(coma2 + 1));

Persona persona(nombre, edad, sueldo);

if (persona.sueldoMayorA1000()) {
persona.escribirEnArchivo(informe);
}

}

archivoSalida.close();
informe.close();


} else{
cerr << "Error al abrir el archivo." << std:: endl;
return 1;
}

cout << "Proceso completado. Verificar el archivo 'informe_sueldos.txt'." << std:: endl;

return 0;
}
