#include <iostream>
# include "libro.h"
# include <string>
#include <iomanip>

using namespace std;

libro::libro(string nombre){
    establecerNombreLibro(nombre);
}

void libro::establecerNombreLibro(string nombre){
    
    if(nombre.size()<=25){
        nombreCurso=nombre;
    }
    else{
        nombreCurso=nombre.substr(0,25);
        cerr<<"El  nombre del curso supera los limites permitidos"<<endl;
    }
}

string libro::obtenerNombreCurso() const{
    return nombreCurso;
}

void libro:: imprimirBienvenida() const{

    cout<<"Bienvenido al curso de : "<<obtenerNombreCurso()<<endl;
}

void libro:: obtenerPromedioClase() const{
    cout<<setprecision(2)<<fixed;

    int nNotas=5;
    double calificacion;
   
    int contador=0;
    double total=0;

    while (true)
    {
        cout<<"Ingrese una calificación ";
        cin>>calificacion;

        if(calificacion<0){
            break;
        }
        else
        {
            contador++;
            total+=calificacion;

        }
    }

    if(total>0){

        double promedio=total/contador;
        cout<<"El promedio de notas para el curso "<<obtenerNombreCurso()<<" es:"<< promedio<<endl;
    }
    else{
      cout<<"No se ingresó ninguna calificación. "<<endl;
    }

}
