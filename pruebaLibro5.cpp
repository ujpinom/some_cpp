#include <iostream>
#include <string>
#include "Libro5.cpp"

using namespace std ;

int main() {

  Libro5 l1("Hola gonorrea");
  Libro5 l2("Chanda");

  std::cout << "Libro calificaciones creado para: " << l1.getNombreCursoo()<<
  "\nLibro calificaciones para: "<<l2.getNombreCursoo()<<endl;

return 0;
}
