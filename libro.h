# include <string>

class libro{

    public:
    explicit libro(std::string);
    void establecerNombreLibro(std::string);
    std::string obtenerNombreCurso() const;
    void obtenerPromedioClase() const;
    void imprimirBienvenida() const;
    private:
    std::string nombreCurso;
};