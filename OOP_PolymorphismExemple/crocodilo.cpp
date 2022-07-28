#include <iostream>
#include <string.h>
using namespace std;
#include "crocodilo.h"

crocodilo::crocodilo(string s, int a, int b):reptil(a, 4){
    especie = s;
}

void crocodilo::tipoLocomocao(){
  cout<<"Anda e nada"<<endl;
}

void crocodilo::melhorAlimento(){
  cout<<"Peixes e pequenos mamiferos"<<endl;
}