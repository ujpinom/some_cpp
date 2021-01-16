#include<iostream>
#include<string>

using namespace std ;

class AnotheryetLibro{
private: string nombreCurso;

public:

  explicit AnotheryetLibro(string nCurso)
      :nombreCurso(nCurso)
      {

      }
      
public:
  void setNombreCurso(string nCurso)  {
    nombreCurso=nCurso;

  }

  string getNombreCurso() const{
    return nombreCurso;
  }

  void mMensaje()const{
    cout<<"El nombre del curso es: "<<endl;
  }

};

int  main(int argc, char const *argv[]) {

    AnotheryetLibro otrolibromas("MB");
    AnotheryetLibro libro2("Diferencial");

    cout<<"Los libros de calificaciones establecidos son: "<<otrolibromas.getNombreCurso()<<
    " Y "<<libro2.getNombreCurso()<<endl;

    otrolibromas.setNombreCurso("Vectorial");
    libro2.setNombreCurso("Especiales");

    cout << '\n';

    cout<<"Los nombres modificados de los cursos son: "<<otrolibromas.getNombreCurso()
    <<" Y "<<libro2.getNombreCurso()<<endl;

  return 0;
}
