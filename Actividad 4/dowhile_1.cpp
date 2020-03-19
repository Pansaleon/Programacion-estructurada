#include <stdio.h>
	int condicion,salida = 1, i = -1;
	float num = 0, sum = 0;
	float prom = 0;
int main (){
	
	do {
		  sum = sum + num;
			i++;
		printf ("Ingrese un numero: \n ");
		scanf ("%f", &num);
	  
	   
	}while (num >=0);
	
	prom = (sum /i);
	printf ("El promedio de la suma de los numeros es: %f",prom);
	
	
	
	
	return 0;
}
