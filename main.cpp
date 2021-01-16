#include <iostream>
using namespace std;
#include <string>
class LibroCalificaciones{
    public:void monstrarMensaje() const{

      std::cout << "Bienvenido al libro de calificaciones" << '\n';
    }
};

int main(){

  LibroCalificaciones miLibroCalificaciones;
  miLibroCalificaciones.monstrarMensaje();

}
