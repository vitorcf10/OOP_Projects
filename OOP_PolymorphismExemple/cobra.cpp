#include <iostream>
#include <string.h>
using namespace std;
#include "cobra.h"

cobra::cobra() : reptil(){
  cor = "preto";
}
cobra::cobra(string s, int a, int b):reptil(a, 0){
    cor = s;
}

void cobra::tipoLocomocao(){
  cout<<"Rasteija"<<endl;
}

void cobra::melhorAlimento(){
  cout<<"Roedores"<<endl;
}