#ifndef pessoa_h
#define pessoa_h

using namespace std;
#include <string.h>
class pessoa{
  private:
  string nome;
  int rg;
  public:
  pessoa(string, int);
  string getNome();
  void setNome(string);
  int getRg();
  void setRg(int);
  void imprime();
};

#endif