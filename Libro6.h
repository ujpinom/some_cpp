# include <string>

class Libro6{

public:
  explicit Libro6(std::string);
  void establecerNombreCurso(std::string);
  std::string obtenerNombreCurso() const;

private:
  std::string nombreCurso;

};
