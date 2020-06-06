//Ricardo de Jesus Saldaña Medina 1742168
// 3.5 For loop
//3.5.1 use while to ask for numbers >= 0 and calculate the median
//using acumulators until a n
//Lab Programación Estructurada Sab 8-10pm L-V
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

    
	
	
	

