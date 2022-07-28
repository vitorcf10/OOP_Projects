#ifndef reptil_h
#define reptil_h

using namespace std;
class reptil{
  protected:
  int idade, numPes;
  public:
  reptil();
  reptil(int, int);
  virtual void tipoLocomocao();
  virtual void melhorAlimento();
  void aumentaIdade();
};

#endif