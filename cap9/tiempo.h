#ifndef TIEMPO_H
#define TIEMPO_H

class tiempo{

    public:
        tiempo();
        void establecerTiempo(int,int,int);
        void imprimirUniversal() const;
        void imprimirEstandar() const;
    
    private:
        int hora;
        int minuto;
        int segundo;

};

#endif