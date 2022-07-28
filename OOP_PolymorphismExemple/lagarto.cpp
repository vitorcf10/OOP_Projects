#include <iostream>
#include <string.h>
using namespace std;
#include "lagarto.h"

lagarto::lagarto(char s, int a, int b):reptil(a, 0){
    tamanho = s;
}

void lagarto::tipoLocomocao(){
  cout<<"Anda"<<endl;
}

void lagarto::melhorAlimento(){
  cout<<"Insetos"<<endl;
}