#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&,int);
void mostrarLista (Nodo *);
void calcularMayorMenor(Nodo *);

int main (){
    Nodo *lista = NULL;
    int dato;
    char respuesta;

    do{
        cout << "Digite un numero: ";
        cin >> dato;
        insertarLista(lista,dato);

        cout << "Desea agregar otro numero: ";
        cin >> respuesta;
    }
    while(respuesta != 's' && respuesta != 'S');

    cout << "Elementos de la lista: ";
    mostrarLista(lista);

    calcularMayorMenor(lista);

    return 0;
}

void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if(lista == NULL){
        lista = nuevo_nodo;
    }
    else{
        aux = lista;
        while (aux->siguiente != NULL){
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo_nodo;
    }

    cout << "Elemento "<<n<<" agregado a la lista correctamente";
}

void mostrarLista(Nodo *lista){
    while(lista != NULL){
        cout << lista->dato << " -> ";
        lista = lista->siguiente;
    }
    cout << "NULL" << endl;
}

void calcularMayorMenor (Nodo*lista) {
    int mayor=0, menor=99999;

    while(lista != NULL){
        if((lista->dato) > mayor){
            mayor = lista->dato;
        }
        if ((lista->dato) < menor){
            menor = lista->dato;
        }

        lista = lista->siguiente;
    }
    cout << "El mayor elemento es: " <<mayor<<endl;
    cout << "El menor elemento es: " <<menor<<endl;
    cout << "Numeros iguales son: " <<lista<<endl;
}
