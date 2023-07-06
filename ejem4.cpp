// El programa devuelve los valores ingresados previamente, de forma vertical y horizontal como tambien te ordena verticalmente de mayor a menor
#include <stdio.h>
void carga (int n, int Vector[]);				// define funcion carga
void imprimir (int n, int Vector[]);			// define funcion imprimir
void ordenar (int n, int Vector[]);				// definefuncion ordenar
int main(){										
	int n=5;									//declara el valor de n
	int V[n];									//declara el vector V sub n
	carga (n,V);								//llama la funcion carga (como argumentos pasa n y V
	imprimir (n,V);								//llama la funcion imprimir (como argumentos pasa n y V)
	ordenar (n,V);								//llama la funcion ordenar (como argumetos pasa N y V)
	imprimir (n,V);								//llama la funcion imprimir de nuevo
	    printf("\n");							//imprime salto de linea
	    for (int i=0; i<n; i++){				//inicia el for
	        printf("%5d",V[i]);					//imprime el valor del vector V sub i
		}
	return 0;								
}

void carga (int n, int Vector[]){				//empieza la funcion carga
	for (int i=0; i<n; i++){					//inicia el for
	    printf("ingrese el valor de la posicion %d: ",i);	//le pide al usuario que ingrese un valor
	    scanf("%d",&Vector[i]);					//escanea el valor ingresado por el usuario
	}
}

void imprimir (int n, int Vector[]){			//empieza la funcion imprimir
	for (int i=0; i<n; i++){					//inicia el for
	  	printf("\n %5d",Vector[i]);				//imprime el valor del vector sub i
	}
	printf("\n");								//imprime salto de linea
}

void ordenar (int n, int Vector[]){				//empieza la funcion ordenar
	int aux;									//crea una variable tipo entero llamada aux
	for (int i=0; i<n; i++){					//inicia el ciclo for de i
		for (int j=0; j<n; j++){				//inicia el ciclo for de j
			if (Vector[i]>Vector[j]){			//condicion 
			    aux=Vector[i];					//le asigna a la variable aux el valor del vector sub i
			    Vector[i]=Vector[j];			//le asigna al vector sub i el valor del vector sub j
			    Vector[j]=aux;					//le asigna al vector sub j el valor de aux
			}
		}
	}
	printf("\n");								//imprime salto de linea
}
