//Ricardo de Jesus Saldaña Medina 1742168
//Lab Programación Estructurada Sab 8-10pm L-V
//3.6 While loop, do-while loop
//3.6.1 use do-while to ask for numbers >= 0 and calculate the
//median using acumulators until a negative number is given.

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
