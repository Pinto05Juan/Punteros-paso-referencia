// El programa devuelve la direccion de memoria de x, , el valor apuntado por y(valor de x), la direccion de memoria de y
#include <stdio.h> 
int main() {
	int x, *y;		//Declaramos una variable entero x y un puntero y a un entero.
	x=10; 			//Asignamos el valor 10 a x
	y=&x;			//Asignamos la direccion de de memoria de x a la variable y
    printf("%d %d %d",y,*y,&y ); // Imprimimos direccion de memoria de x, el valor apuntado por y, la direccion de y.
	return 0;
}


