#include <iostream>
#include <string>
#include "Libro6.h"

using namespace std ;

Libro6::Libro6(string nombre){
  establecerNombreCurso(nombre);
}

void Libro6::establecerNombreCurso(string nombre){

  if(nombre.size()<=25){
    nombreCurso=nombre;
  }
  if(nombre.size()>25){
    nombreCurso=nombre.substr(0,25);
    std::cerr << "La longitud del nombre del curso excede el numero de caracteres permitidos." << endl;
  }
}

string Libro6:: obtenerNombreCurso() const{
  return nombreCurso;
}
