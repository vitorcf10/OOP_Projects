#ifndef lagarto_h
#define lagarto_h

using namespace std;
#include "reptil.h"
class lagarto : public reptil{
    private:
    char tamanho;
    public:
    lagarto(char, int, int);
    void tipoLocomocao();
    void melhorAlimento();
};

#endif