#include <stdio.h>
int main(){
  int i;
  int numero = 0;
  printf ("ingrese el  numero hasta donde quiere contar");
  scanf ("%d", &numero);
  while(i < numero){
    i++;
    printf ("%d", i);
  }

  
}return 0;
