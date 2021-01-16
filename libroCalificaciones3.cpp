# include <iostream>
# include <string>
using namespace std;

class otroLibroCalificaciones {
private: string nombreCursoo;
public:
  void establecerNombreCurso(string nombrecuros) {

  nombreCursoo=nombrecuros;
}

 string obtenerNombreCurso() const{
  return nombreCursoo;
}

void monstrarMensaje() const{

  cout << "El nombre del curso es :" <<obtenerNombreCurso()<<endl;
}

};

int main(int argc, char const *argv[]) {
  otroLibroCalificaciones milibro;
  string nombreDelCurso;
  cout<<"escriba el nombre del curso: ";
  getline(cin,nombreDelCurso);
  milibro.establecerNombreCurso(nombreDelCurso);
  milibro.monstrarMensaje();
  return 0;
}
