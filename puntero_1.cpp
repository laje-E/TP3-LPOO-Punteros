#include <stdio.h>
int num1, num2, aux;
void cambio (int num1, int num2);
int main () {
	printf ("ingrese el numero 1");
	scanf ("%d", &num1);
	printf ("ingrese el numero 2");
	scanf ("%d", &num2);
	printf ("el valor del numero 1 %d y el numero 2 %d", num1, num2);
    cambio (num1,num2);
}
void cambio (int num1, int num2)
{
    aux = num1;
    num1 = num2;
    num2 = aux;
    printf ("los numeros cambiados son: numero 1 %d y numero 2 %d",num1, num2);
}

