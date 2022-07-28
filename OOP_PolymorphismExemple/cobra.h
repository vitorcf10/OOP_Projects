#ifndef cobra_h
#define cobra_h
using namespace std;
#include <string.h>
#include "reptil.h"
class cobra : public reptil{
    private:
    string cor;
    public:
    cobra();
    cobra(string, int, int);
    void tipoLocomocao();
    void melhorAlimento();
};

#endif 