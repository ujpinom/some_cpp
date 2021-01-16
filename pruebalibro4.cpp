#include <iostream>
#include<string>
# include "Libro4.h"

using namespace std;

int main(int argc, char const *argv[]) {

  Libro4 l4("Hola perro");
  Libro4 l5("Hola gonorrea");

  std::cout <<"Los nombres son: " << '\n'<<l4.getNombreCurso()<<'\n'<<l5.getNombreCurso()<<endl;

  return 0;
}
