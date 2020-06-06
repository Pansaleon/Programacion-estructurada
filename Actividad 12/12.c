//Ricardo de Jesus Saldaña Medina 1742168
// 3.12 Pointers 1
//Lab Programación Estructurada Sab 8-10pm L-V
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>


struct Datos{
    int id;
    char nombre[30];
    char apellido[30];
    char cumple[30];
    char escuela[30];
    char grado[10];
    char carrera[30];
    char genero;
};
void entrada(struct Datos *pr);
void salida(struct Datos *pr);
int alumn=0;
typedef char cad[' ']; 
struct Datos alu[2], *pr;

int main(){
    entrada(alu);
    salida(alu);
    
    system("pause");
    return 0;
}
void entrada(struct Datos *pr){
    pr=&alu[0];
    char s[' '];
    int i, otro=0;
    do{
        fflush(stdin);
        printf ("Ingresa tu id: \n");
		gets(s);
		pr->id=atoi(s);
        printf ("Ingresa tu nombre: \n");
        gets(pr->nombre);
        fflush(stdin);
        printf ("Ingresa tu apellido: \n");
        gets(pr->apellido);
         fflush(stdin);
        printf ("Ingresa tu fecha de nacimiento: \n");
        gets(pr->cumple);
         fflush(stdin);
        printf ("Ingresa tu escuela: \n");
        gets(pr->escuela);
         fflush(stdin);
        printf ("Ingresa tu grado: \n");
        gets(pr->grado);
         fflush(stdin);
        printf ("Ingresa tu carrera: \n");
        gets(pr->carrera);
         fflush(stdin);
        printf ("Ingresa tu genero: \n");
        scanf ("%c",&pr->genero);
        system("cls");
      	printf ("Vas a capturar otro alumno? 1 (si) 0 (no)\n");
      	scanf ("%d",&otro);
       system("cls");
  	 	pr++;
       	alumn++;
    }while (otro!=0);
}


void salida(struct Datos *pr){
    pr=&alu[0];
    int i;
    system("cls");
    printf ("SALIDA DE ALUMNOS\n");
    for(i=0;i<alumn;i++){
    printf("\nAlumno num: %d\n", i+1);
    printf("Id: %d\n",pr->id);
    printf("Nombre: %s\n", pr->nombre);
    printf("Apellido:: %s\n",pr->apellido);
    printf("Fecha de Nacimiento: %s\n",pr->cumple);
    printf("Escuela: %s\n",pr->escuela);
    printf("Grado que cursa: %s\n",pr->grado);
    printf("Carrera que estudia: %s\n",pr->carrera);
    printf("Seleccione su genero: %c",pr->genero);
        pr++;
    }
    
  }
