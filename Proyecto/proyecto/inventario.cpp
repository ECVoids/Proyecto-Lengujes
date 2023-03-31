#include <iostream>
#include "inventario.h"
using namespace std;

inventario::inventario(){
  this->invent= lnk(NULL);
}

void inventario::sacar(int idd){
  lnk inventary= invent;
  inventary.eliminar(idd);
}

void inventario::ingresar(string namee, int idd, float precioo, string tipoo, int cantidadd){
  lnk inventory= invent;
  inventory.addhead(namee, idd, precioo, tipoo, cantidadd);
}

void inventario::cambiar(int idd){
  lnk inventory= invent;
  inventory.modify(idd);
}