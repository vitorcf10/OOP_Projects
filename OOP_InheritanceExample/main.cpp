#include <iostream>
#include "coordenador.h"
#include "pessoa.h"
#include "professor.h"
int main() {
  professor p("Marcio", 123, 10000.00);
  int x = p.getRg();
  std::cout<<x;
}