#include <iostream>
#include "Articulo.h"
using namespace std;

Articulo::Articulo(string namee, int idd, float precioo, string tipoo, int cantidadd){
  name=namee;
  id=idd;
  precio=precioo;
  tipo=tipoo;
  cantidad=cantidadd;
}

deportivo::deportivo(string namee, int idd, float precioo, string tipoo, int cantidadd):Articulo(namee, idd, precioo, tipoo, cantidadd){
}

tecnologico::tecnologico(string namee, int idd, float precioo, string tipoo, int cantidadd):Articulo(namee, idd, precioo, tipoo, cantidadd){
}

extranjero::extranjero(string namee, int idd, float precioo, string tipoo, int cantidadd):Articulo(namee, idd, precioo, tipoo, cantidadd){
}