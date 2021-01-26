# include <string>

# ifndef EMPLEADO_1_H
# define EMPLADO_1_H

class Empleado_1{

    public:
        explicit Empleado_1(const std::string &,const std::string & apellido);
        static int obtenerCuenta();
        ~Empleado_1();
        std::string obtenerNombre() const;
        std::string obtenerApellido() const;
    private:
        std::string nombre;
        std::string apellido;
    
    static int cuenta;


};

# endif