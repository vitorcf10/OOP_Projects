#ifndef coordenador_h
#define coordenador_h

using namespace std;
#include <string.h>
#include "professor.h"
class coordenador : public professor{
  private:
  string curso;
  public:
  coordenador(string, int, double, string);
  string getCurso();
  void setCurso(string);
  double getCoordSalario();
  void imprime();
};

#endif