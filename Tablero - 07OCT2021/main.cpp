//Tablero - 08 Octubre 2021
//JOVEN JIMENEZ ANGEL CRISTIAN

#include <stdio.h>

void imprimeTablero(int t[8][8]){
	char blanco = 219;
	char negro = 176;
	
	printf("\n\n");
	for (int i = 0; i < 8; i++) {
		printf("  ");
		for (int j = 0; j < 8; j++) {
			if (t[i][j] == 0) {
				printf("%c%c%c", blanco,blanco,blanco);
			}
			if (t[i][j] == 1) {
				printf("%c%c%c", negro,negro,negro);
			}
		}
		printf("\n");
	}
};

int main()
{
	int tablero[8][8] = { {1,0,1,0,1,0,1,0},
						  {0,1,0,1,0,1,0,1},
						  {1,0,1,0,1,0,1,0},
						  {0,1,0,1,0,1,0,1},
						  {1,0,1,0,1,0,1,0},
						  {0,1,0,1,0,1,0,1},
						  {1,0,1,0,1,0,1,0},
						  {0,1,0,1,0,1,0,1} };

	imprimeTablero(tablero);

}
