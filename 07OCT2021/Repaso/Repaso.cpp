//Clase 07 OCTUBRE 2021
//JOVEN JIMENEZ ANGEL CRISTIAN
#include <stdio.h>

int main()
{
    int numeros[10];
    int i = 0;
    while (i < 10) {
        numeros[i] = i + 1;
        i = i + 1;
    }
    i = 0;
    while (i < 10) {
        printf("El elemento almacenado en la pocision %d es %d\n", i, numeros[i]);
        i = i + 1;
    }
    i = 0;
    while (i < 10) {
        if (numeros[i] % 2 == 0){
            numeros[i] = (numeros[i] + 5) * (i + 1);
        }
        else {
            numeros[i] = (numeros[i] - 1) * 10;
        }
        i = i + 1;
    }
    printf("\n--------------------------------------------------------------------------\n\n");
    i = 0;
    while (i < 10) {
        printf("El elemento almacenado en la pocision %d es %d\n", i, numeros[i]);
        i = i + 1;
    }
    printf("\n--------------------------------------------------------------------------\n\n");
}
