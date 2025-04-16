#include <stdio.h>
#include <string.h>

void crear_palabra (char palabra1 [20], char palabra2 [20]);
void ocurrencias (char palabra1 [20], char palabra2 [20], int n, int m);
int main () {
    char palabra1 [20];
    char palabra2 [20];
    int n = strlen (palabra1);
    int m = strlen (palabra2);
    crear_palabra (palabra1, palabra2);
    
    ocurrencias (palabra1, palabra2, n, m);
}

void crear_palabra (char palabra1 [20], char palabra2 [20]){
    printf ("ingrese la primer palabra ");
    scanf ("%s", palabra1);
    printf ("ingrese la segunda palabra ");
    scanf ("%s", palabra2);
}

void ocurrencias (char palabra1 [20], char palabra2 [20], int n, int m) {
    int cant_ocurrencias;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (strcmp(palabra1 [i], palabra2 [i]) == 0){
                cant_ocurrencias = cant_ocurrencias + 1;
            }
        }
    }
    printf ("la cantidad de ocurrencias es: %d", cant_ocurrencias);
}
