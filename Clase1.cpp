#include <iostream>
#include <string>
#include "Clase1.h"

using namespace std ;

Clase1::Clase1(string nombre){
  establecerNombreCurso(nombre);
}

void Clase1::establecerNombreCurso(string nombre){

  if(nombre.size()<=25){
    nombreCurso=nombre;
  }
  else{
    nombreCurso=nombre.substr(0,25);
    cerr<<"El nombre es demasiado largo. Se estable el nombre a los primero 25 caracteres"<<'\n';

  }
}

string Clase1:: obtenerNombreCurso() const{
  return nombreCurso;
}

void Clase1::determinarPromedioClase()const{

  int total=0;
  int numeroNotas=5;
  unsigned int contador=1;

  while (contador<=numeroNotas) {
    int nota=0;
    cout<<"Ingrese la nota # :"<<contador<<'\n';
    cin>>nota;
    total+=nota;
    contador+=1;
  }

  double promedio=static_cast<double>(total)/numeroNotas;
  cout<<"El promedio de la clase es: "<<promedio<<endl;
}
