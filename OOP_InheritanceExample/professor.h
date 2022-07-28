#ifndef professor_h
#define professor_h

using namespace std;
#include <string.h>
#include "pessoa.h"
class professor : public pessoa{
    private:
    double salario;
    public:
    professor(string, int, double);
    double getSalario();
    void setSalario(double);
    void imprime();
};

#endif