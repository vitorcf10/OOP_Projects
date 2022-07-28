#include "matriz.h"
using namespace std;
matriz::matriz(int r, int c){
  if(r>0 && c>0){
    row = r;
    col = c;
  }else{
    row = col = 2;
  }
  int** p = new int*[row];
  for (int i = 0; i < row; ++i){
    p[i] = new int[col];
  } 
  
}

matriz::matriz(const matriz& v){
  row =v.row;
  col =v.col;
  int** p = new int*[row];
  for (int i = 0; i < row; ++i){
    p[i] = new int[col];
  } 
  for (int i = 0; i < row; i++){
    for(int j = 0; j<col; j++){
      p[i][j]=v.p[i][j];
    }
  } 
}

matriz::~matriz(){
  for (int i = 0; i < row; ++i){
    delete [] p[i];
  }  
  delete [] p;
}

matriz matriz::operator+(matriz x){
    matriz m(row, col);
    for (int i = 0; i < row; i++){
      for(int j = 0; j<col; j++){
        m.p[i][j] = this->p[i][j] + x.p[i][j];
      }
    } 
  
  return m;
}

void matriz::setElementos(){
  for (int i = 0; i < row; i++){
      for(int j = 0; j<col; j++){
        cout<< "Elemento da linha: "<< i <<" Elemento da linha: "<< j<< endl;
        cin>>p[i][j];
    }
  } 
}
