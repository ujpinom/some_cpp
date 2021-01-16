# include <iostream>
# include <string>

using namespace std;

class LibroCalificaciones2{

public: void ingresarCurso(string mensaje) const{
  std::cout << "Bienvenido al curso de :" << mensaje<<endl;
}

};

int  main(int argc, char const *argv[]) {
  string nombreCurso;
  cout<<"Ingrese el nombre del curso: ";
  getline(cin,nombreCurso);

  LibroCalificaciones2 otroLibro;
  otroLibro.ingresarCurso(nombreCurso);
}
