# include <string>

class LibroCalificaciones{

    public:
        explicit LibroCalificaciones(std:: string);
        void establecerNombreCurso(std::string);
        std:: string getNombreCurso() const;
        void ingresarNotasCurso();
        void reporteNotasCurso() const;
    private:
        std::string nombreCurso;
        int A;int B;int C;int D;int E;int F;

};