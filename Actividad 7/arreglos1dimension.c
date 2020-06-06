//Ricardo de Jesus Saldaña Medina 1742168
//Lab Programación Estructurada Sab 8-10pm L-V
//3.7 1d Arrays
//3.7.1 Ask to the user a number less than 100 and calculate all
//the primes numbers equals or less than the given number.
#include <stdio.h>

int main (){
	int numero=0, i=0, j=0, residuo=0, numeros_divisibles=0;
	printf ("Introduce el numero para calcular primos: \n");
	scanf("%d", &numero);
	//i se repetira el numero que se indico como maximo para calcular el numero de primos//
	for(i=1; i<=numero; i++){
		for(j=1; j<=i; j++){
			residuo= i%j;
			if(residuo==0){
				numeros_divisibles=numeros_divisibles+1;
			}
		}
		if(numeros_divisibles==2){
			printf ("\n%d",i);
		}
		numeros_divisibles=0;
	}
	
	  
	return 0;
}
