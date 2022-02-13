//Ricardo de Jesus Saldaña Medina 
//1742168
#include<stdio.h>
#include<ctype.h>
#include<string.h>
struct Alumnos{//Struct con datos de los alumnos
	int id;
	char first_name[30];
	char last_name[30];
	char birth[30];
	char school[30];
	char grade[30];
	char career[30];
	char gender[30];
}alu;//Variable del struct

int main(){
	FILE *create;//puntero file 
	char *data = "Practica.json";//Asignando nombre del archivo
	int salir =0;//Variable que ayuda a salir del ciclo
	
	create = fopen(data, "w+"); //abriendo archivo mediante el puntero que se creo
do{
	
	create = fopen(data, "a");
	if(create == NULL){//comprobando que se abra archivo correctamente
		printf("Error,El archivo no pudo abrirse\n");
		return -1;//retora un error si falla
	}
	else{//empieza ciclo de captura
		printf("\nIntroduzca su nombre: ");
		fflush(stdin);
		gets(alu.first_name);
		printf("\nIntroduzca sus apellidos: ");
		fflush(stdin);
		gets(alu.last_name);
		printf("\nFecha de nacimiento DD/MM/YY: ");
		fflush(stdin);
		gets(alu.birth);
		printf ("\nEscuela: ");
		fflush(stdin);
		gets(alu.school);
		printf ("\nGrado: ");
		fflush(stdin);
		gets(alu.career);
		printf("\nCarrera: ");
		fflush(stdin);
		gets(alu.career);
		printf ("\nGenero: ");
		gets(alu.gender);
		
		fprintf(create,"{\n\"id\":\"%d\"\n",alu.id);//imprimiendo en archivo 
		fprintf(create, "\"nombre\":\"%s\"\n",alu.first_name);
		fprintf(create, "\"apellido(s)\":\"%s\"\n",alu.last_name);
		fprintf(create, "\"fecha nacimiento\":\"%s\"\n",alu.birth);
		fprintf(create, "\"escuela\":\"%s\"\n",alu.school);
		fprintf(create, "\"grado\":\"%s\"\n",alu.grade);
		fprintf(create, "\"carrera\":\"%s\"\n",alu.career);
		fprintf(create, "\"genero\":\"%s\"\n}",alu.gender);
		printf("Archivo Creado exitosamente.\n\n");
	}

	fclose(create);//cerrando archivo
	
	printf("Desea añadir otro alumno? \n1 - Si\n0 - No\n");//capturando condicional
	scanf ("%d", &salir);
	//(esta actualizado :D)

	

}while(salir!=0);//condicional del ciclo
}

