#include <stdio.h>
#include <string.h>
void crear_cadenas (char palabra1 [20], char palabra2 [20]);
void concatenar (char aux1 [20], char aux2 [20]);
int main () {
    char palabra1 [20];
    char palabra2 [20];
	crear_cadenas(palabra1, palabra2);
	char aux1 [20];
	char aux2 [20];
	strcpy(aux1, palabra1);
	strcpy(aux2, palabra2);
	concatenar (aux1, aux2);
	printf ("la palabra concatenada es: %s ", aux1);
}
void crear_cadenas (char palabra1 [20], char palabra2 [20]){
	printf ("ingrese la palabra nº1 deseada ");
	scanf ("%s", palabra1);
	printf ("ingrese la palabra nº2 deseada ");
	scanf ("%s", palabra2);
}

void concatenar (char aux1 [20], char aux2 [20]){
    strcat(aux1, aux2);
}
