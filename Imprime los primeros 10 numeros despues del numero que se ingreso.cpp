//Imprime los primeros 10 numeros despues del numero que se ingreso

#include <stdio.h>
#include <math.h>

int main(){
int opc;

printf ("Porfavor introduzca el numero que desee conocer: ");
scanf("%d",&opc);

printf("%d\n", opc + 1);
printf("%d\n", opc + 2);
printf("%d\n", opc + 3);
printf("%d\n", opc + 4);
printf("%d\n", opc + 5);
printf("%d\n", opc + 6);
printf("%d\n", opc + 7);
printf("%d\n", opc + 8);
printf("%d\n", opc + 9);
printf("%d\n", opc + 10);

printf("Sus valores aparecen en pantalla gracias por usar el programa :)");
printf("\a");
return 0;
}
