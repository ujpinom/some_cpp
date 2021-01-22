# include <string>
# include <array>
# include <iostream>
# include <iomanip>
# include "LibroCalificaciones.cpp"
# include <algorithm>

using namespace std;

int main(){
     string nombreCurso= "Programacion en C++";
     array<int,LibroCalificaciones::numeroEstudiantes> notas={56,68,94,100,83,78,85,91,76,87};

     LibroCalificaciones libro1(nombreCurso,notas);

     libro1.mensajeBienvenida();
     libro1.procesarNotas();
}