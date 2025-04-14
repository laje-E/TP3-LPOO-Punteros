#include <stdio.h>
float numero, total, cont, resultado_promedio;
float suma (float total, float numero);
float promedio (float total, float cont);
int main () {
	
	do {
		cont = cont + 1;
		total = suma (total, numero);
		printf ("ingrese el numero %f. si quiere salir ingrese 0 ", cont);
		scanf ("%f", &numero);
	} while (numero != 0);
	resultado_promedio = promedio (total, cont);
	printf ("la suma da en total: %f ", total);
	printf ("el promedio es %f ", resultado_promedio);
}
float suma (float total, float numero)
{
	return (total + numero);
}

float promedio (float total, float cont)
{
	return (total / (cont - 1));
}
