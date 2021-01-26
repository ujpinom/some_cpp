# include <iostream>
# include <iomanip>
# include <string>
# include "Empleado_1.cpp"
using namespace std;

int main(){

{    cout<<"El numero de cuentas antes de crear cualquier objeto es :"<<Empleado_1::obtenerCuenta()<<endl;

    Empleado_1 e1("Uriel","Pino");Empleado_1 e2("Pacho","El gono");

    cout<<"El numero de objetos empleados creados es: "<<Empleado_1::obtenerCuenta()<<endl;

}

cout<<"El numero de cuentas despues de llamar a los destructores es: "<<Empleado_1::obtenerCuenta()<<endl;



}