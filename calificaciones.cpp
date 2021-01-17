#include <iostream>
# include <string>
# include "calificaciones.h"

using namespace std;

    LibroCalificaciones::LibroCalificaciones(string nombre)
        :A(0), B(0), C(0), D(0), E(0), F(0)

    {
        establecerNombreCurso(nombre);
    }

    void LibroCalificaciones::establecerNombreCurso(string nombre){

        if(nombre.size()<=25){
            nombreCurso=nombre;
        }
        else{
            nombreCurso=nombre.substr(0,25);
            cerr<<"El  nombre del curso supera los limites permitidos"<<endl;
        }
    }

    string LibroCalificaciones::getNombreCurso () const{
        return nombreCurso;
    }

    void LibroCalificaciones::ingresarNotasCurso() {

        cout<<"Ingrese las notas de los estudiantes. Cuando haya terminado presione las teclas ctrl+z"<<endl;

        int calificacion;

        while ((calificacion=cin.get())!=EOF)
        {
                
            switch (calificacion)
            {
                case 'A':
                case 'a':
                    ++A;break;

                case 'B':
                case 'b':
                    ++B;break;

                case 'C':
                case 'c':
                    ++C;break;
                
                case 'D':
                case 'd':
                    ++D;break;
                
                case 'E':
                case 'e':
                    ++E;break;

                case 'F':
                case 'f':
                    ++F;break;

                case '\n':
                case '\t':
                case ' ':
                    break;
            
                default:
                cout<<"Ingrese una calificacion valida."<<endl;
                break;
            }
        }
        
    }

    void LibroCalificaciones::reporteNotasCurso() const{

        cout<<"La distribucción de notas es la siguiente: "<<'\n'<<"Calificacion A: "<<A<<'\n'<<"Calificacion B: "<<B<<'\n'<<"Calificacion C: "<<C<<'\n'<<"Calificacion D: "<<D<<
        '\n'<<"Calificacion E: "<<E<<'\n'<<"Calificacion F: "<<F<<endl;

    }