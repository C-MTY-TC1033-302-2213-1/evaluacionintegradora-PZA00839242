#include "Producto.h"
using namespace std;

Producto::Producto(){
    nombre = "Pablo Zapata";
    precio = 839242;
    peso = 18;
}

Producto::Producto(string _nombre, int _precio, int _peso){
    nombre = _nombre;
    precio = _precio;
    peso = _peso;
}

    //Métodos modificadores - setters 
void Producto::setNombre(string _nombre){
    nombre = _nombre;
}

void Producto::setPrecio(int _precio){
    precio = _precio;
}

void Producto::setPeso(int _peso){
    peso = _peso;
}

    //Métodos de acceso - getters
string Producto::getNombre(){
    return nombre;
}

int Producto::getPrecio(){
    return precio;
}

int Producto::getPeso(){
    return peso;
}

    //Métodos particulares
string Producto::str(){
    return nombre + "-$" + to_string(precio) + '-' + to_string(peso) + "-$" + to_string(calculaTotalPagar());
}

int Producto::calculaTotalPagar(){
    return precio * peso;
}