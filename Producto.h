#ifndef Producto_h
#define Producto_h

#include <stdio.h>
#include <string>

using namespace std;

class Producto{
protected:
    string nombre;
    int precio;
    int peso;

public:
    //Constructores
    Producto();
    Producto(string _nombre, int _precio, int _peso);

    //Métodos modificadores - setters 
    void setNombre(string _nombre);
    void setPrecio(int _precio);
    void setPeso(int _peso);

    //Métodos de acceso - getters
    string getNombre();
    int getPrecio();
    int getPeso();

    //Métodos particulares
    virtual string str();
    virtual int calculaTotalPagar();  
};

#endif 