#include <string>

class Libro5{

public:
  explicit Libro5(std::string);
  void setNombreCursoo(std::string);
  std:: string getNombreCursoo() const;


private:
  std::string nombreCursoo;
};
