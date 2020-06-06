//RIcardo de Jesus Saldaña Medina 1742168
// 3.10 Pointers 1
//Lab Programación Estructurada Sab 8-10pm L-V



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct Alumnos{
	int id;
	char first_name[30];
	char second_name[30];
	char last_name[30];
	char sec_last_name[30];
};

int main() {
int num_alumnos, condicion_nombre,i, j,num_ids, ban, cont, b, op;

struct Alumnos alu[20];


do{
    do{
        b=0;
    printf("Ingrese su id: \n");
    scanf("%ld",&alu[cont].id);

    for(j=0;j<cont;j++){
        if(alu[cont].id == alu[j].id){
            b=1;
        }
    }
    }while(b==1);
		fflush(stdin);
		printf ("\n Ingresa tu primer nombre: \n");
		gets (alu[cont].first_name);
		fflush(stdin);

		printf ("\n Tienes segundo nombre? 1(si) 2(no)");
		scanf ("%d",&condicion_nombre);
		fflush(stdin);

		if (condicion_nombre == 1){
			printf ("\n Ingresa tu segundo nombre: \n");
			gets (alu[cont].second_name);
		}
		fflush(stdin);

		printf ("\n Ingresa tu primer apellido: \n");
		gets (alu[cont].last_name);
		fflush(stdin);

		printf ("\n Ingresa tu segundo apellido: \n");
		gets (alu[cont].sec_last_name);
		fflush(stdin);
		
		
	printf("Desea ingresar otro estudiante?:\n1-Si\n 2-No\n");
    scanf("%d",&op);
	system ("cls");
	cont++;
}
while (op==1);

system ("cls");
for(i=0;i<cont;i++){
    printf("\nLos datos del alumno#%d:\nMatricula: %ld\n Nombre: %s\n Segundo nombre: %s\n ApellidoP: %s\n ApellidoM: %s",i+1,alu[i].id,alu[i].first_name,alu[i].second_name,alu[i].last_name,alu[i].sec_last_name);

}

return 0;
}
