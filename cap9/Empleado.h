 
# ifndef EMPLEADO_H
# define EMPLEADO_H

# include <string>
# include "Fecha.h"


class Empleado{

    public:
     explicit Empleado(const std::string &,const std::string & ,const Fecha &,const Fecha &);

        void imprimirEmpleado() const;
        ~Empleado();
    private:
        std::string nombre;
        std::string apellido;
        Fecha nacimiento;
        Fecha contratacion;
};

# endif