//Ricardo de Jesus Saldaña Medina 1742168
/*ask the student information {studentid, fistname, firstlastname,
secondlastname (optional), birthdate, school, grade, career,
gender} to the user and store it in arrays. finally print the
records
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
char alu[10][25];
	printf("Introduzca su matricula: ");
	gets(alu[0]);
	
	printf("Introduzca su nombre: ");
	gets(alu[1]);
	
	printf("Introduzca su apellido paterno: ");
	gets(alu[2]);
	
	printf("Introduzca su apellido materno: ");
	gets(alu[3]);

	printf("Introduzca su fecha de nacimiento: ");
	gets(alu[4]);
	
	printf("Introduzca su escuela: ");
	gets(alu[5]);
	
	printf("Introduzca su grado: ");
	gets(alu[6]);
	
	printf("Introduzca su carrera: ");
	gets(alu[7]);
	
	printf("Introduzca su genero: ");
	gets(alu[8]);
	system("cls");

	printf("La matricula  del alumno es: %s\n\n", alu[0]);
	printf("El nombre del alumno es: %s %s %s\n\n", alu[1],alu[2],alu[3]);
	printf("Fecha de nacimiento del alumno es: %s\n\n", alu[4]);
	printf("La escuela del alumno es: %s\n\n", alu[5]);
	printf("El grado del alumno es: %s\n\n", alu[6]);
	printf("La carrera del alumno es: %s\n\n", alu[7]);
	printf("El genero del alumno es: %s\n\n", alu[8]);
}
