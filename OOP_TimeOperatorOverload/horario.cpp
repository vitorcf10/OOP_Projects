#include <iostream>
#include "horario.h"
#include <iomanip>
using namespace std;

void horario::setHora(int a){
  if(a>=0 && a<=23){
    hora = a;
  }else{
    hora = 0;
  }
}

void horario::setMinuto(int a){
  if(a>=0 && a<=59){
    minuto = a;
  }else{
    minuto = 0;
  }
}

horario::horario(int a, int b){
  setHora(a);
  setMinuto(b);
}

const int horario :: getHora(){
  return hora;
}

const int horario :: getMinuto(){
  return minuto;
}

horario horario::operator+(int a){
  int overMin = this->minuto+a;
  int horasExtra = overMin/60;
  int novoMin = overMin-(horasExtra*60);
  horario resultado(this->hora+horasExtra, novoMin);
  return resultado;
}

bool horario::operator>(const horario &operando){
  bool a;
  if(this->hora>operando.hora){
    a= true;
  }else if(this->hora<operando.hora){
    a= false;
  }else if(this->hora==operando.hora){
    if(this->minuto>operando.minuto){
      a= true;
    }else{
      a= false;
    }
  }
  return a;
}

bool horario::operator==(const horario &operando){
  bool a;
  if(this->hora == operando.hora && this->minuto == operando.minuto){
    a = true;
  }else{
    a= false;
  }
  return a;
}

bool horario::operator>=(const horario &operando){
  return (*this > operando || *this == operando);
}

ostream &operator<<(ostream &out, const horario &operando){
  out<< setfill('0') << setw(2)<<operando.hora << ":"<<setfill('0') << setw(2)<<operando.minuto;
  return out;
}