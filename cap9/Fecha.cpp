# include <iostream>
# include <iomanip>
# include <string>
# include <stdexcept>
# include "Fecha.h"
# include <array>

using namespace std;

Fecha::Fecha(int dia,int mes,int anio)
{
    if(mes>0 && mes <=12){
        Mes=mes;
    }
    else{
        throw invalid_argument("Mes no permitido");

    }

    Anio=anio;
    Dia=validarDia(dia);

    cout<<"Constructor para el objeto Fecha ";
    imprimirFecha();

    cout<<endl;

}

void Fecha::imprimirFecha() const{

    cout<<Dia<<"/"<<Mes<<"/"<<Anio<<endl;

}


Fecha::~Fecha(){
    cout<<"Destructor para el objeto Fecha ";
    imprimirFecha();
    cout<<endl;
}

int Fecha::validarDia(int dia) const{

    const array<int,13> dias_anio={0,31,28,31,30,31,30,31,31,30,31,30,31};

    if(dia<=dias_anio[Mes]){
        return dia;
    }

    if(Mes==2&& dia==29 &&(Anio%400==0||(Anio%4==0 && Anio%100==0)))
    return dia;

    throw invalid_argument ("Dia no permitido");
}



