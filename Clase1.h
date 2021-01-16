# include<string>

class Clase1{

public:
  explicit Clase1(std::string);
  void establecerNombreCurso(std::string);
  std:: string obtenerNombreCurso() const;
  void determinarPromedioClase() const;

private:
  std:: string nombreCurso;

};
