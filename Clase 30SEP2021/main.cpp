//#include <iostream>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int suma = 0;
	int n = 1000000;
	printf("|\ti\t|      suma\t|\n");
	printf("---------------------------------\n");
	
	for(int i=1;i<=n;i=i+1){
		printf("|\t%d\t|\t%d\t|\n", i,suma);
		printf("---------------------------------\n");
		suma = suma + i;
	}
	printf("La suma es: %d",suma);
	return 0;
}
