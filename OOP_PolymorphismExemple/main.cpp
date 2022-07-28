#include <iostream>
using namespace std;
#include "reptil.h"
#include "cobra.h"
int main() {
  reptil *a = new reptil;
  a->melhorAlimento();
  reptil *r = new cobra;
  r->melhorAlimento();
  cout<<"oi";
  return 0;
}