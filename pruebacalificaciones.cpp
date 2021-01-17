#include <iostream>
# include <string>
# include "calificaciones.cpp"

using namespace std;

int main(){

    LibroCalificaciones libro("Intro C++");
    libro.ingresarNotasCurso();
    libro.reporteNotasCurso();

}