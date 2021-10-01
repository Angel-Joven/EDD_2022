//Tarea_02_EDD.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JOVEN JIMENEZ ANGEL CRISTIAN

#include <iostream>

int main() {
	//Figura 01
	printf("--------------------------------\nFigura 01\n");
	printf("\n");
	int n = 5;
	for (int i = 1; i <= n; i = i + 1) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	//Figura 02
	printf("--------------------------------\nFigura 02\n");
	printf("\n");
	int a = 5;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a-i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	//Figura 03
	printf("--------------------------------\nFigura 03\n");
	printf("\n");
	int b = 5;
	for (int i = b; i >= 1;i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}
	//Figura 04
	printf("--------------------------------\nFigura 04\n");
	printf("\n");
	int c = 5;
	for (int i = c; i >= 1;i--) {
		for (int j = 1; j <= c-i; j++) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
/* Figura 01     |    Figura 02    |  Figura 03  |  Figura 04
	*	 |          *	   |	*****	 |    *****
	**       |         **	   |	****	 |     ****
	***      |	  ***	   |	***      |	***
	****	 |	 ****	   |	**	 |	 **
	*****	 |	*****	   |	*	 |	  *
*/
