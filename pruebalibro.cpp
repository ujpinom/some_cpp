#include <iostream>
#include <string>
# include "libroCentinela.cpp"

using namespace std;

int main(){

    libro miLibro("Programacion en C++");
    cout<<"El nombre establecido del curso es: "<<miLibro.obtenerNombreCurso()<<endl;
    miLibro.imprimirBienvenida();
    miLibro.obtenerPromedioClase();

}
