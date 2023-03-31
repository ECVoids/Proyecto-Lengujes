#include <iostream>
#include "usuario.h"

usuario::usuario(inventario inve){
      inve=inventa;
    }

coordinador::coordinador(inventario inve):usuario(inve){
  
}

cliente::cliente(inventario inve, inventario carritoo):usuario(inve){
  carrito=carritoo;
}

void coordinador::agart(string namee, int idd, float precioo, string tipoo, int cantidadd){
  inventario i=inventa;
  i.ingresar(namee, idd, precioo, tipoo, cantidadd);
}

void coordinador::moart(int idd){
  inventario i=inventa;
  i.cambiar(idd);
}

void coordinador::eliart(int idd){
  inventario i=inventa;
  i.sacar(idd);
}

void cliente::comprar(string namee, int cantidadd){
  inventario i=inventa;
  nodo* temporal;
  temporal->next = i.invent.head;
  while(temporal->next!=NULL && temporal->data.name!=namee){
    temporal = temporal->next;
  }
  if (temporal->data.name==namee){
    temporal->data.cantidad = temporal->data.cantidad-cantidadd;
    if(temporal->data.cantidad>0){
      cout << "Estas intentando comprar mas de lo disponible en inventario, intenta de nuevo" << endl;
        comprar(namee, cantidadd);
        
    }
    else if(temporal->data.cantidad==0){
      int idd= temporal->data.id;
      i.sacar(idd);
      
    }
  }
}

void cliente::pagar(){
  
}