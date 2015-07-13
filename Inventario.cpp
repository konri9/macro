#include "Inventario.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//testing git
using namespace std;
using namespace parse_line;

/*
bool Inventario:: yalo (int codiguin)
{
    for (int i=0;i<cantidad_productos; i++)
    {
        if (codiguin == arr_products[i].codigo){
            return false;
        }
    }
    return true;
}
*//*

// EFE: Genera un codigo a partir de un parametro establecido
int Inventario generador_de_codigos ()
{
    while (yalo){
        randy = rand() % 20;
    }
    base += randy;
    return base;
}*/


Inventario::Inventario(string arch) //ctor
{
    ifstream file;
    file.open(arch.c_str(), ios::in);
    if (file.is_open() && file.good())
    {
        arr_products.resize(320);//cnt productos
        char line [256];
        int count = 0;
        while (!file.eof())
        {
            memset(&line, 0, 256);
            file.getline(line,256);
            string info = line;
            if(cantidad_elementos(info)>0)
            {
                arr_products[count].label = parametro(info, 0, ',');
                arr_products[count].codigo = elemento(info, 1, ',');
                arr_products[count].precio = elemento_double(info, 2 , ',');
                arr_products[count].unidades = elemento(info , 3 , ',' );
                count ++;
            }
            //cout << "el contador es" <<  count << endl;
        }

        if(count > 0)
        {
            this->cantidad_productos = count;
        }
        return;
    }
    throw 1;
}



Inventario::~Inventario()
{
    //dtor
}

// Recibe un string con los parametros del producto y almacena cada uno en el vector de productos
void Inventario::classifyData(string information)
{

}

void Inventario::print(string guat)
{
    if (guat == "products")
    {
        cout << "la cantidad de productos es "<< cantidad_productos << endl;
        for(int i=0; i<cantidad_productos;i++) cout << arr_products[i].label<< endl;

    }

    if (guat == "codigos")
    {
       for(int i=0; i<cantidad_productos;i++)  cout << arr_products[i].codigo<< endl;
    }

    if (guat == "prices")
    {
       for(int i=0; i<cantidad_productos;i++)  cout << arr_products[i].precio<< endl;

    }

    if (guat == "unidades")
    {
        for(int i=0; i<cantidad_productos;i++)  cout << arr_products[i].unidades<< endl;

    }
}





