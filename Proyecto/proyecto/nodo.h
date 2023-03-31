#include "Articulo.h"
#include <iostream>
using namespace std;

class nodo {
public:
  Articulo data;
  nodo *next;

  nodo(){};

  nodo(string, int, float, string, int);
};