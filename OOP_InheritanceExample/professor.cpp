#include <iostream>
#include <string.h>
#include "professor.h"

using namespace std;

professor::professor(string n, int x, double s):pessoa(n, x){
  salario = s;
}

double professor::getSalario(){
  return salario;
}

void professor::setSalario(double s){
  salario = s;
}

void professor::imprime(){
  pessoa::imprime();
  cout<<"Salario: R$"<< salario << endl;
}