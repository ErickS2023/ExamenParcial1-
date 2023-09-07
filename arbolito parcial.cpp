
//Programa que haga un arbolito de navidad, pero con el mismonúmero de pisos hacia arriba y hacia abajo
#include <stdio.h>

int main(void)
{
    int lineas;
    printf("Por favor ingrese el numero de lineas que desee para su arbol de navidad: ");
    scanf("%d", &lineas);
    int i;
    printf("||||\n");
    for (i = lineas; i >= 1; i--)
    {
    	int j;
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i <= lineas; i++)
    {
    	int j;
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    
    printf("\a");
        
}
 printf("||||");


 printf("Aqui esta su arbolito de Navidad felices fiestas :))");
    return 0;
}
