# include <iostream>
# include <iomanip>
# include <string>
# include "Empleado_1.h"
using namespace std;

Empleado_1::Empleado_1(const string & nombre,const string & apellido )
    
{
    this->nombre=nombre;
    this->apellido=apellido;
    ++cuenta;
    cout<<"Se creo el constructor para el objeto"<<" "<<nombre<<" "<<apellido<<endl;
}

int Empleado_1::obtenerCuenta(){
    return cuenta;
}

string Empleado_1::obtenerApellido()const{
    return apellido;
}

string Empleado_1::obtenerNombre()const{
    return nombre;
}

Empleado_1::~Empleado_1(){

    cout<<"Se llamo el destructor para el objeto"<<nombre<<" " <<apellido<<endl;
       --cuenta;
}

int Empleado_1::cuenta=0;


