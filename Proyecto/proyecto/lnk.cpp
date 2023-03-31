#include <iostream>
#include "lnk.h"
using namespace std;

lnk::lnk(nodo* headd){
  this->head=headd;
}

void lnk::addhead(string namee, int idd, float precioo, string tipoo, int cantidadd){
  nodo* newnode = new nodo(namee, idd, precioo, tipoo, cantidadd);
  if(head==NULL){
    newnode->next=NULL;
    head=newnode;
  }
  else{
    nodo* temporal=head;
      while(temporal->next!=NULL){
        temporal = temporal -> next;
      }
      temporal->next = newnode;
  }
}

void lnk::eliminar(int idd){
  nodo* temporal= head;
  nodo* anterior= NULL;
  while(temporal->data.id!=idd){
    anterior = temporal;
    temporal = temporal->next;
  }
  if(anterior==NULL){
    head = head -> next;
    delete temporal;
  }
  else{
    anterior->next = temporal->next;
    delete temporal;
  }
}

void lnk::modify(int idd){
  nodo* temporal= head;
  while(temporal->data.id!=idd){
    temporal = temporal ->next;
  }
  int opcion;
  cout << "Si quieres cambiar el nombre escribe 1, el precio 2, la cantidad 3 \n"; 
  cin >> opcion; 
  switch(opcion){
    case 1:{
      string xd;
      cout << "ingrese el nuevo nombre:" << endl;
      cin >> xd;
      temporal->data.name=xd;
      break;
    }
    case 2:{
      int xdd;
      cout << "ingrese el nuevo precio:" << endl;
      cin >> xdd;
      temporal->data.precio=xdd;
      break;
    }
    case 3:{
      int xddd;
      cout << "ingrese la nueva cantidad:" << endl;
      cin >> xddd;
      temporal->data.cantidad=xddd;
      break;
    }
  }
}

void lnk::show(){
  nodo* temporal= head;
  while(temporal!=NULL){
    cout << temporal->data.name << endl;
    cout << temporal->data.id << endl;
    cout << temporal->data.precio << endl;
    cout << temporal->data.tipo << endl;
    cout << temporal->data.cantidad << endl;
    temporal = temporal->next;
  }
}
