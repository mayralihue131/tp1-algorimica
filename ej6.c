#include <stdio.h>
int main(){
  int i = 1;
  int num;
  printf ("ingrese el numero a contar");
  scanf ("%d", &num);
  do{
    printf ("%d\n", i);
    i++;
  }while(i <=num)

}return 0;
