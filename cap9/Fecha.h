# include <string>

#ifndef FECHA_H
#define FECHA_H

class Fecha{

    public:
        explicit Fecha(int=1, int=1,int=1900);
        void imprimirFecha() const;
        ~Fecha();

    private:
        int Dia;int Mes;int Anio;
        int validarDia(int) const;

};

#endif