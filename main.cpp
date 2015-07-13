#include <iostream>
#include "Parse.h"
#include "Inventario.h"
using namespace std;
using namespace parse_line;
int main()
{
    cout << "Bienvenido a la base de datos!"<< endl;
    Inventario inv ("pruebaInventario.csv");
    string command;
    while (true)
    {
        cout <<">>";
        getline(cin, command);
        cout << command<< endl;
        if (cantidad_elementos(command)>0)
        {
            if(command == "ver articulos")
            {
                inv.print("products");
            }
            if(command == "ver codigos")
            {
                inv.print("codigos");
            }
            if (command == "ver precios")
            {
                inv.print("prices");
            }
            if (command == "ver cantidades")
            {
                inv.print("unidades");
            }
            if (command == "salir")
                break;
        }
    }

//    cout << "Hello world!" << endl;
    return 0;
}
