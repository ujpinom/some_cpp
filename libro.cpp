# include <iostream>
#include <string>
#include "libro.h"
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

void libro::obtenerPromedioClase()const{

    int numeroNotas=5;
    int contador=1;
    int notas=0;
    while (contador<=numeroNotas)
    {
        int temp=0;
        cout<<"Ingrese la nota #: "<<contador<<" : ";
        cout<<'\n';
        cin>>temp;
        notas+=temp;
        contador++;
    }

    double promedio= static_cast<double>(notas)/numeroNotas;
    cout<<"El promedio de notas para el curso "<<obtenerNombreCurso()<< "es de "<<promedio<<endl;

}



