#include <stdio.h>
#include <string.h>
void vector (float num[], int n);
void comparacion (float *min, float *max, float num[], int n);
int main () {
    int n = 3;
    float max = -99999999999;
	float min = 99999999999;
	float num[n];
	vector (num, n);
	comparacion (&min ,&max ,num, n);
	printf ("el valor minimo es: %f", min);
	printf ("el valor maximo es: %f", max);
}
void vector (float num[], int n){
	for (int i=0;i<n;i++){
		printf ("ingrese la casilla del vector nº %d", i);
		scanf ("%f", &num[i]);
	}
}

void comparacion (float *min, float *max, float num[], int n) {
	for (int i=0;i<n;i++){
		if (i==0 || num[i] < *min) {
		   *min = num[i];
        }
        if (i==0 || num[i] > *max) {
		   *max = num[i];
        }
	}
}
