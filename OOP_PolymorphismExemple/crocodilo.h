#ifndef crocodilo_h
#define crocodilo_h

using namespace std;
#include <string.h>
#include "reptil.h"
class crocodilo : public reptil{
    private:
    string especie;
    public:
    crocodilo(string, int, int);
    void tipoLocomocao();
    void melhorAlimento();
};

#endif 