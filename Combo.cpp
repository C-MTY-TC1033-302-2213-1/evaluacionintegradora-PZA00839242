#include "Combo.h"
using namespace std;

Combo::Combo(){
    clave = 0;
}

Combo::Combo(string _nombre, int _precio, int _peso, 
    int _clave):Producto( _nombre,  _precio, _peso){
        clave = _clave;
    }

string Combo::str(){
    return nombre + "-$" + to_string(precio) + '-' + to_string(peso) + "-$" + to_string(calculaTotalPagar()) + 
    '-' + to_string(clave);
}

int Combo::calculaTotalPagar(){
    int descuento, totalPagar;

    descuento = 0;
    totalPagar = 0;

    totalPagar = precio * peso * clave;

    if(clave == 1){
        descuento = (totalPagar / 100) * 25;
        return totalPagar - descuento;
    }
    else if(clave == 2){
        descuento = (totalPagar / 100) * 30;
        return totalPagar - descuento;
    }
    else{
        return totalPagar;
    }

}  