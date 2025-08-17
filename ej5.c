#include <stdio.h>
int main(){
  int i = 1;
  int numero;
  printf ("ingrese el  numero hasta donde quiere contar");
  scanf ("%d", &numero);
  while(i <= numero){
    printf ("%d", i);
    i++;
  }

  
}return 0;
