

#include <iostream>
#include <string.h>
#include "coordenador.h"

using namespace std;

coordenador::coordenador(string n, int x, double s, string c):professor(n, x, s){
  curso = c;
}

string coordenador::getCurso(){
    return curso;
}

void coordenador::setCurso(string c){
  curso = c;
}

double coordenador::getCoordSalario(){
  return professor::getSalario() + 2000;
}

void coordenador::imprime(){
pessoa::imprime();
cout<<"Salario: R$"<< getCoordSalario() << endl;
cout<<"Curso: "<< curso << endl;
}

