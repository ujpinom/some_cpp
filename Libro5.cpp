# include <string>
# include <iostream>
# include "Libro5.h"

using namespace std;

 Libro5::Libro5(string nombre)
  :nombreCursoo(nombre)
    {

    }// fin del constructor

void Libro5::setNombreCursoo(string nombre){
  nombreCursoo=nombre;
}

string Libro5::getNombreCursoo() const{
  return nombreCursoo;
}
