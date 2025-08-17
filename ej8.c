#include <stdio.h>
int main(){
  int edad;
  int anio = 2025;
  int mes = 8;
  int dia = 17;
  int anionac, mesnac, dianac;
  printf ("ingrese su cumpleaños  con &/&/&/\n");
  scanf ("%d/%d/d", &dianac, &mesnac, &anionac );
  edad = anio - anionac;
  if (mesnac > mes && dianac > dia || mesnac == mes){
    dia --;
  }
  printf ("tienes %d años", edad);

  
}return 0;
