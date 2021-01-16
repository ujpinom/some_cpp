#include <iostream>
#include <string>

class Libro4{

  private: std::string nombreCurso;

public:
  explicit Libro4(std::string nombre)
    :nombreCurso(nombre)
  {
    //Cuerpo del constructor
  }//fin del constructor

public:
  void setNombreCurso(std::string nombre)  {
    nombreCurso=nombre;
  }

  std::string getNombreCurso() const{
    return nombreCurso;
  }
};
