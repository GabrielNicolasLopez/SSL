#include <stdio.h>

int main(){
	int edad;
	char nombre[20];
	
	printf("Ingrese su nombre: ");
	scanf("%s", &nombre);
	printf("\nIngrese su edad: ");
	scanf("%d", &edad);
	
	printf("Su nombre es %s y su edad es %d.", nombre, edad);
	
	return 0;
}