#include <stdio.h>
char vector1[8];
char vector2[8];
char vector3[8];
char vector4[8];
char vector5[8];
char vector6[8];
char vector7[8];
char vector8[8];

void mostrar(char arreglo[][8],int filas, int columnas){
	for (int i = 0;i< filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			printf ("%c", arreglo[i][j]);
		}
		printf ("\n");
	}
}

void rotar(char arreglo [][8], int filas, int columnas, int contador){
	if(contador >= 8){
		char temp [8][8];
		for (int i = 0;i< filas; i++)
		{
			for (int j = 0; j < columnas; j++)
			{
				if(i == 0){
					temp[i][j]=vector1[8-j-1];
				}
				if(i == 1){
					temp[i][j]=vector2[8-1-j];
				}
				if(i == 2){
					temp[i][j]=vector3[8-1-j];
				}
				if(i == 3){
					temp[i][j]=vector4[8-j-1];
				}
				if(i == 4){
					temp[i][j]=vector5[8-j-1];
				}
				if(i == 5){
					temp[i][j]=vector6[8-j-1];
				}
				if(i == 6){
					temp[i][j]=vector7[8-j-1];
				}
				if(i == 7){
					temp[i][j]=vector8[8-j-1];
				}

			}

		}
		
	mostrar(temp,filas,columnas);

	}
	else{

		if(contador == 0){
			for (int i = 0; i<filas;i++){
				vector1[i] = arreglo[i][contador];
			}
			contador++;
		}
		if(contador == 1){
			for (int i = 0; i<filas;i++){
				vector2[i] = arreglo[i][contador];
			}
			contador++;
		}	
		if(contador == 2){
			for (int i = 0; i<filas;i++){
				vector3[i] = arreglo[i][contador];
			}
			contador++;
		}
		if(contador == 3){
			for (int i = 0; i<filas;i++){
				vector4[i] = arreglo[i][contador];
			}
			contador++;
		}	
		if(contador == 4){
			for (int i = 0; i<filas;i++){
				vector5[i] = arreglo[i][contador];
			}
			contador++;
		}
		if(contador == 5){
			for (int i = 0; i<filas;i++){
				vector6[i] = arreglo[i][contador];
			}
			contador++;
		}	
		if(contador == 6){
			for (int i = 0; i<filas;i++){
				vector7[i] = arreglo[i][contador];
			}
			contador++;
		}
		if(contador == 7){
			for (int i = 0; i<filas;i++){
				vector8[i] = arreglo[i][contador];
			}
			contador++;
		}	
		rotar(arreglo,filas, columnas,contador);
	}
}

int main (int argc, char *argv[] )
{
	int contador=0;
	char laberinto[8][8] = {
		{' ', ' ', ' ', ' ', ' ', ' ','#','#'},
		{' ', ' ', ' ', ' ', ' ', '#','#',' '},
		{'#', ' ', ' ', ' ', '#', '#',' ',' '},
		{'#', ' ', ' ', '#', '#', ' ',' ',' '},
		{'#', ' ', '#', '#', ' ', ' ',' ',' '},
		{'#', '#', '#', ' ', ' ', ' ',' ',' '},
		{'#', '#', ' ', ' ', ' ', ' ',' ',' '},
		{'#', '#', '#', '#', '#', '#',' ',' '},
	};

	int filas =(sizeof (laberinto) / sizeof (laberinto[0]));
	int columnas =(sizeof (laberinto[0]) / sizeof (laberinto[0][0]));
	mostrar(laberinto,filas, columnas);

	printf("\n");
	rotar(laberinto,filas, columnas,contador);


}
