# include <iostream>
# include<iomanip>
# include "Empleado.h"
# include "Fecha.h"
# include <string>

using namespace std;

Empleado::Empleado(const string &nombre,const string &apellido,const Fecha &nacimiento,const Fecha& contratacion )

    :nombre(nombre),apellido(apellido),nacimiento(nacimiento),contratacion(contratacion)

{
    cout<<"Construtor para el objeto empleado "<<nombre<<" "<<apellido<<endl;
}  // fin del constructor


void Empleado::imprimirEmpleado() const{

    cout<<"Empleado "<<nombre<<" "<<apellido<<'\n'<<"Fecha de nacimiento :";
    nacimiento.imprimirFecha();
    cout<<'\n'<<"Fecha contratacion: ";
    contratacion.imprimirFecha();
    cout<<endl;

}

Empleado::~Empleado(){
    cout<<"Destructor del objeto empleado "<<nombre<<" "<<apellido<<endl;
}