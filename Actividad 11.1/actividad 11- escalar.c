
//Ricardo de Jesus Saldaña Medina 1742168
//Lab Programación Estructurada Sab 8-10pm L-V
//3.8 2d Arrays
//3.8.1 3x3 Matrix and ask to the user the 3 x 3 values int, ask for
//a scalar int value and multipy the matrix by the scalar.

#include <stdio.h>

void matriz(int escalar);

int main (){
	
	int escalar;
	printf ("Ingrese un valor escalar para multiplicar la matriz\n : ");
	scanf ("%d", &escalar);
	
	matriz(escalar);


	return 0;
}
void matriz(int escalar){
		
	int mdosdim[3][3];
	int i;
	int j;
	
	for ( i=0;i<3; i++){
		for ( j=0; j<3; j++){
			printf ("Ingrese el valor para [%d] [%d]\n: ", i+1, j+1);
			scanf("%d",&mdosdim[i][j]);
			
		 mdosdim [i][j] *= escalar;
		 	 
		}

	}

	printf ("Los elementos del array son: \n");
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf ("%d \t", mdosdim[i][j]);
			
		}
		printf ("\n");
		
	}
}
