#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

using namespace std;

<template class><typename T>

class Pila : public vector{
  void adicionar (T elemento){
    push_back(elemento);
  }
  void mostrar(){
    for (int  i = 0; i < size(); i++) {
      cout << at(i) << endl;
    }
  }
};