//Programa que obtiene los impares de una lista de enteros.

#include<stdio.h>
#include<math.h>
int main ()
{
	
	int d=0;
	//scanf("%d", &d);
	while (d%2 ==1 || d<10)
	{
		
		printf("%d \n",d+1);
		d=d+2;
	}
	
	
	return 0;
} 
