#include <iostream>
#include <iomanip>
using namespace std;
class matriz{
  friend ostream &operator<<(ostream&,const matriz&);
  friend istream &operator>>(istream&,matriz&);
  private:
  int** p;
  int row, col;
  public:
  matriz operator +(matriz);
  matriz(int, int);
  matriz(const matriz&);
  ~matriz();
  void setElementos();
};