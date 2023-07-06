#include <stdio.h>

void ordenar(int* numeros, int n) {	//declaramos la funcion ordenar
    int i, j, temp;	//declaramos las variables i, j y temp de tipo entero
    for (i = 0; i < n-1; i++) {	//iniciamos el ciclo de i
        for (j = 0; j < n-i-1; j++) {
            if (numeros[j] > numeros[j+1]) {	//condicion del if 
                temp = numeros[j];	
                numeros[j] = numeros[j+1];
                numeros[j+1] = temp;
            }
        }
    }
}
int main() {
    int numeros[5];	
    int i;
    printf("Ingresa 5 numeros:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }
    ordenar(numeros, 5); //llamamos a la funcion ordenar
    printf("Numeros ordenados:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    return 0;
}
