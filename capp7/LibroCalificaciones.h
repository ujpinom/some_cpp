# include <string>
# include <array>


class LibroCalificaciones{
    public:
        static const size_t numeroEstudiantes=10;
        LibroCalificaciones(const std::string &,const std::array <int,numeroEstudiantes> &);
        void establecerNombreCurso(std::string &);
        std::string obtenerNombreCurso() const;
        void mensajeBienvenida() const;
        void procesarNotas() const;
        int notaMaxima() const;
        int notaMinima() const;
        void imprimirDistribucion() const;
        double promedio() const;
        void ordenarNotas();

    private:
        size_t estudiantes;
        std::string nombreCursos;
        std::array<int,numeroEstudiantes> notas;
};