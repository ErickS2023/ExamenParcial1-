#include <stdio.h>
 
int main() {
  int i,n,division=0, opc, s=0, k;
  int d=0;
 
 
  printf("Por favor ingrese sus valores: ");
  scanf("%d",&n);

  for (i=1; i<=n; i++) {
	  
    printf("Ingrese el valor que quiera saber: ");
    scanf("%d",&opc);
    division = division % opc;

}
	if (opc%2==1){
	printf("%d",opc);}
	
	else (opc%2==0);{
	printf("No da",opc);}
	printf("\a");
	
  return 0;
}