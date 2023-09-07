//Programa que suma N números enteros.

#include <stdio.h>
 
int main() {
  int i,n,suma=0;
  int numero;
 
 
  printf("Por favor ingrese sus valores: ");
  scanf("%d",&n);
 
  for (i=1; i<=n; i++) {
    printf("Ingrese el valor que quiera saber: ");
    scanf("%d",&numero);
    suma = suma + numero;
  }
 
  printf("%d",suma);
 printf("\a");
  return 0;
}







