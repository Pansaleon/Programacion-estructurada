#include <stdio.h>

int main(){
	int condicion, i = -1;
	float num = 0, sum = 0;
	float prom = 0;
	
	
	while (num >= 0)
	{
	sum = sum + num;

	   
		printf ("Ingrese un numero: \n ");
		scanf ("%f", &num);
		i++;
	    
    }
    
	prom = (sum / i);
    printf ("El promedio de la suma de los numeros es: %f",prom);
    
	return 0;
	}

    
	
	
	

