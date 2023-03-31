#include <iostream>
#include "nodo.h"

nodo::nodo(string namee, int idd, float precioo, string tipoo, int cantidadd){
  this->data=Articulo(namee, idd, precioo, tipoo, cantidadd);
  //this->data=deportivo(namee, idd, precioo, tipoo, cantidadd);
  //this->data=tecnologico(namee, idd, precioo, tipoo, cantidadd);
  //this->data=extranjero(namee, idd, precioo, tipoo, cantidadd, descuentoo);
}