#include <stdio.h>
void vector (int num1[], int num2[], int n);
void copia (int *num1[], int *num2[], int n);
int main () {
	int n = 3;
	int num1 [n];
	int num2 [n];
	vector (num1, num2, n);
	
	copia (num1[n], num2[n], n);
	
}
void vector (int num1[], int num2[], int n){
    for (int i = 0; i<n ; i++){
        printf ("ingrese del vector 1 el numero nº %d ", i);
        scanf ("%d", num1[i]);
    }
    for (int i = 0; i<n ; i++){
        printf ("ingrese del vector 1 el numero nº %d ", i);
        scanf ("%d", num2[i]);
    }
    printf ("los vectores originales son: ");
    printf ("vector 1 ");
    for (int i=0;i<n;i++){
        printf ("nº%d : %d", i, num1);
    }
    printf ("vector 2 ");
    for (int i=0;i<n;i++){
        printf ("nº%d : %d", i, num2);
    }
    
}

void copia (int num1[], int num2[], int n){
	for (int i = 0; i<n ; i++){
		int aux = num1[i];
		num1[i] = num2[i];
		num2[i] = aux;
	}
	printf ("los vectores cambiados son: ");
    printf ("vector 1 ");
    for (int i=0;i<n;i++){
        printf ("nº%d : %d", i, num1);
    }
    printf ("vector 2 ");
    for (int i=0;i<n;i++){
        printf ("nº%d : %d", i, num2);
    }
}
