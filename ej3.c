#include <stdio.h>
int main(){
  int edad;
  int anio = 2025;
  int anionac;
  printf ("cual es tu año de nacimiento?\n");
  scanf ("%d", &anionac);
  edad = anio - anionac;
  printf ("tu tiene %d años aproximadamente", edad);

  
}return 0;
