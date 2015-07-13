#ifndef INVENTARIO_H
#define INVENTARIO_H

#include <vector>
#include <iostream>
#include <stdlib.h>
#include "Parse.h"
using namespace std;
class Inventario
{
public:
    Inventario(string arch);
    ~Inventario();
    void classifyData(string information);
    void print(string guat);
    int generador_de_codigos ();
   // bool yalo (int codiguin);

protected:
private:
    struct producto
    {
        string label;
        int codigo;
        double precio;
        int unidades;

    };

    vector<producto> arr_products;
    int cantidad_productos;//, curr_code = 1000;
};

#endif // INVENTARIO_H
