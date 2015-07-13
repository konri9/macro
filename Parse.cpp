#include "Parse.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

namespace parse_line
{

unsigned int cantidad_elementos(const string& linea, char rem)
{
    unsigned int count = 0;
    if (linea.size() > 0) count = 1;
    for (int i = 0; i < linea.size(); i++)
    {
        if (linea[i] == rem)
        {
            count++;
        }
    }
    return count;
}

string saca_instruccion (const string& inst , char rm)
{
    size_t pos = inst.find(rm);
    string buffer = inst.substr(0, pos);
    return buffer;
}



string remover_comillas(const string& str)
{
    string res = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != '\"') res += str[i];
    }
    return res;
}


string parametro(string linea, int indice, char rem)
{
    unsigned int count = 0, pos;
    for (int i = 0; i < linea.size(); i++)
    {
        if (indice == count)
        {
            pos = linea.find(rem, i);
            if (pos == string::npos) pos = linea.size();
            string buffer = linea.substr(i, pos);
            return buffer;
        }
        if (linea[i] == rem)
        {
            count++;
        }
    }
    return "";
}

int elemento(string linea, int indice, char rem)
{
    return atoi(parametro(linea, indice, rem).c_str());
}


double elemento_double(string linea, int indice, char rem)
{
    return atof(parametro(linea, indice, rem).c_str());
}



}
