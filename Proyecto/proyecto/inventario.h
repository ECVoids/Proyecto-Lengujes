#include <iostream>
#include "lnk.h"

class inventario{
  public: 
    lnk invent;
    inventario();

    void sacar(int idd);

    void ingresar(string namee, int idd, float precioo, string tipoo, int cantidadd);

    void cambiar(int idd);
};
