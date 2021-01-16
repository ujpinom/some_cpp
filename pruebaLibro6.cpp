#include<iostream>
#include <string>
# include "Libro6.cpp"

int main(){

  Libro6 l1("Introducccion a la programacion en C++");
  Libro6 l2("Hola perro");

  std::cout << "El nombre inicial del curso 1 es: " << l1.obtenerNombreCurso()<<'\n'<<
  "El nombre del segundo curso es: "<<l2.obtenerNombreCurso()<<endl;

  l1.establecerNombreCurso("programacion en C++");
  cout<<'\n';
  cout<<"Se corrigió el nombre del libro 1 a :"<<l1.obtenerNombreCurso()<<endl;

}
