#ifndef Combo_h
#define Combo_h

#include"Producto.h"

using namespace std;

class Combo : public Producto{
private:
    int clave;

public:
    //Constructores
    Combo();
    Combo(string _nombre, int _precio, int _peso, int _clave);

    //Métodos particulares
    string str();
    int calculaTotalPagar();  
};

#endif