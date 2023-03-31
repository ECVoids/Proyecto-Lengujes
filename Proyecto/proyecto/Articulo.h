#include <iostream>
using namespace std;

class Articulo{
  public:

  string name;
  int id;
  float precio; 
  string tipo;
  int cantidad;

  Articulo(){};

  Articulo(string, int, float, string, int);
};

class deportivo: public Articulo{
  public: 
  deportivo(string, int, float, string, int);
};

class tecnologico: public Articulo{
  public:
  tecnologico(string, int, float, string, int);
};

class extranjero: public Articulo{
  public:
  int descuento = 10;
  extranjero(string, int, float, string, int);
};
