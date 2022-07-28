#include <iostream>
#include <string.h>
#include "pessoa.h"
using namespace std;

pessoa::pessoa(string s, int z){
  nome = s;
  rg=z;
}

string pessoa::getNome(){
  return nome;
}

void pessoa::setNome(string s){
  nome = s;
}

int pessoa::getRg(){
  return rg;
}

void pessoa::setRg(int s){
  rg = s;
}

void pessoa::imprime(){
  cout<<"Nome: "<< nome << endl;
  cout<<"RG: "<< rg << endl;
}