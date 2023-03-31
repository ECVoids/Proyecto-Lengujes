#include <iostream>
#include "nodo.h"

class lnk{
  public:
    nodo* head=NULL;
    lnk(){};
    lnk(nodo* headd);

    void addhead(string namee, int idd, float precioo, string tipoo, int cantidadd);

    void eliminar(int idd);

    void modify(int idd);

    void show();
};