#include <iostream>
#include "inventario.h"

class usuario{
  public:
    inventario inventa;

    usuario(inventario inve);
};

class coordinador: public usuario{
  public:
    coordinador(inventario inventaa);

    void agart(string namee, int idd, float precioo, string tipoo, int cantidadd);

    void moart(int idd);

    void eliart(int idd);
};

class cliente: public usuario{
  public:
    inventario carrito;

    cliente(inventario inventaa, inventario carritoo);

    void comprar(string namee, int cantidadd);
    
    void pagar();
};