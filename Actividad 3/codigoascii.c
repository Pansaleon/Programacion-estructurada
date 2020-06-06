//Ricardo de Jesus Saldaña Medina 1742168
// 3.3 If
//3.3.1 Program that identifies the charact
//Lab Programación Estructurada Sab 8-10pm L-V
#include <stdio.h>
#include <math.h>
int main ()
{
	/*Practica 3 */
	int c;
	printf ("Ingrese un caracter cualquiera\n");
	c = getchar ();
	int a= (int) c;
	
	
	if (48 <= a && a <= 57){
		printf ("Es un numero entero");
	}
		else if      (65 <= a && a <= 90)
{
        printf ("\n Es una mayuscula");
		}
		else if 	 (97 <= a && a <= 122)
{
	    printf ("\n Es una letra minuscula");		
		}
		else {
			printf ("\n Es un simbolo");
	
	}


	putchar (c);
	
	printf ("\n");
	
	return 0;
}
