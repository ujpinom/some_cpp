# include <string>
# include <array>
# include <iostream>
# include <iomanip>
# include "LibroCalificaciones.h"
# include <algorithm>

using namespace std;

LibroCalificaciones::LibroCalificaciones( const string &nombre,const array<int,numeroEstudiantes>&calificaciones )
    :nombreCursos(nombre),
    notas(calificaciones)
{
    ordenarNotas();
}

void LibroCalificaciones::establecerNombreCurso(string& nombre){
    nombreCursos=nombre;
}

void  LibroCalificaciones::ordenarNotas(){
    sort(notas.begin(),notas.end());
}

string LibroCalificaciones::obtenerNombreCurso() const{
    return nombreCursos;
}

void LibroCalificaciones::mensajeBienvenida() const{

cout<<"Bienvenido al curso de :"<<obtenerNombreCurso()<<endl;

}

void LibroCalificaciones::procesarNotas() const{
    cout<<"A continuacion se muestran las notas :"<<endl;

    for(int nota:notas){
        cout<<nota<<" ";
    }
    cout<<endl;

    cout<<"La nota minima fue "<<notaMinima()<<" mientras que la nota maxima fue "<<notaMaxima()<<endl;

    cout<<"El promedio del curso es: "<<promedio()<<endl;

    imprimirDistribucion();

}

int  LibroCalificaciones::notaMinima() const{
    return notas[0];

}

double  LibroCalificaciones::promedio() const{

    double total=0;

    for(int nota:notas){
        total+=nota;
    }

    return total/numeroEstudiantes;

}

int  LibroCalificaciones::notaMaxima() const{
    return notas[notas.size()-1];
}

void  LibroCalificaciones::imprimirDistribucion() const{

    cout<<"La disitribuccion de notas es la siguiente: "<<endl;

    array<size_t,11> freq={};

    for(int nota:notas){
        ++freq[nota/10];
    }

    for(int i=0;i<freq.size();i++)
    {
        if(i==10){
            cout<<"    100: ";
        }
        else if(i==0){
            cout<<"0 - 9: ";

        }
        else{
            cout<<i<<" - "<<10*i+9<<" : ";
        }

        for(int j=0;j<freq[i];j++){
            cout<<" * ";
        }

        cout<<endl;
    }
}