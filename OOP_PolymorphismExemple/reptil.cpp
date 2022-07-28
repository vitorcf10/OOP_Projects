#include <iostream>
using namespace std;
#include "reptil.h"

reptil::reptil(){
    numPes = 0;
    idade = 1;
}

reptil::reptil(int x, int y){
    if(x>=0 && x<=120){
      idade = x;
    }else{
      idade = 0;
    }
    if(y>=0 && y<=4){
      numPes = y;
    }else{
      numPes = 0;
    }
}

void reptil::tipoLocomocao(){
  cout<<"Repteis podem andar ou rasteijar"<<endl;
}

void reptil::melhorAlimento(){
  cout<<"Repteis em geral comem insetos, peixes, mamiferos, aves, outros repteis e alguns sao vegetarianos."<<endl;
}

void reptil::aumentaIdade(){
  idade++;
}