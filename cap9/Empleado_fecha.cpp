# include <iostream>
# include "Empleado.cpp"
# include "Fecha.cpp"
# include <string>
using namespace std;

int main(){

Fecha nacimiento(2,7,1995);
Fecha contratacion (2,2,2020);

Empleado trabajo ("Uriel","Pino",nacimiento,contratacion);

cout<<endl; 
trabajo.imprimirEmpleado();

}