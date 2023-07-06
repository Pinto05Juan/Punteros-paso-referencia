// El programa devuelve los numeros ingresados por el usuario de forma horizontal y vertical
#include <stdio.h>
void carga (int n, int Vector[]); //declaracion de la funcion carga
void imprimir (int n, int Vector[]); //declaracion de la funcion imprimir
 
int main()
{
int n=5;	// Define la variable n
int V[n];	// Define un vector de tamaño n
carga (n,V); // Llama a la funcion carga y como argumentos pasa n y el vector
imprimir (n,V); // Llama a la funcion imprimir y como argumentos pas n y el vector
           	printf("\n"); // Salto de linea
           	for (int i=0; i<n; i++){ // Iniciamos el ciclo for
    	        printf("%5d",V[i]);	// imprime el valor del vector sub i
	       	}
	       	return 0;
}
void carga (int n, int Vector[]){ 	//  la funcion carga recibe como parametro n y el vector
           	 int i;
           	 for (i=0; i<n; i++){ 	// Iniciamos ciclo for
    	        printf("ingrese el valor de la posicion %d: ",i); 	//Le pide al usuario que ingrese valores en el vector
               	scanf("%d",&Vector[i]);	 // Escanea los valores del vector sub i
           	  }
}
void imprimir (int n, int Vector[]){ 	// la funcion imprimir recibe como parametro  n y el vector
           	 for (int i=0; i<n; i++){	// Iniciamos ciclo for
  	            printf("\n %5d",Vector[i]); // Se imprimen los valores del vector sub i
	       	}
           	 printf("\n");	//imprime salto de linea
}
