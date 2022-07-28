#ifndef horario_h
#define horario_h
#include <iostream>

using namespace std;


class horario{
  private:
    int hora, minuto;
    void setHora(int), setMinuto(int);
   public:
   horario(int, int);
   const int getHora();
   const int getMinuto();
   horario operator+(int);
   bool operator>(const horario &operando);
   bool operator==(const horario &operando);
   bool operator>=(const horario &operando);
  friend ostream &operator<<(ostream &out, const horario &operando);
};
#endif