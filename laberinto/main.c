#include <stdio.h>
#include<stdbool.h>

char laberinto[7][7] = {
	{' ','#','#','#','#','#','#'},
	{' ',' ',' ',' ',' ',' ','#'},
	{'#','#','#','#','#',' ','#'},
	{'#',' ',' ',' ',' ',' ','#'},
	{'#',' ','#','#',' ','#','#'},
	{'#',' ','#','#',' ',' ','#'},
	{'#','F','#','#','#','#','#'},
};

void mostrar(){
	int filas = (sizeof(laberinto)/sizeof(laberinto[0]));
	int columnas = (sizeof(laberinto[0])/sizeof(laberinto[0][0]));
	for (int i = 0; i < filas; i++)
	{
		for (int j = 0; j < columnas; j++)
		{
			printf("%c",laberinto[i][j]);
		}
		printf("\n");
	}
}

bool paso(int x, int y){
	if(laberinto[x][y] == 'F'){
		return true;
	}
	if(laberinto[x][y] == '#'||laberinto[x][y] == '.'){
		return false;
	}
	laberinto[x][y] = '.';
	bool resultado;
	resultado = paso (x,y+1);
	if  (resultado){
		return true;
	}
	resultado = paso (x,y-1);
	if  (resultado){
		return true;
	}
	resultado = paso (x+1,y);
	if  (resultado){
		return true;
	}
	resultado = paso (x-1,y);
	if  (resultado){
		return true;
	}
	laberinto[x][y] = ' ';
	return false;
}

void resolver(int x, int y){
	if(laberinto[x][y] == laberinto[0][0]){
		x=1;
		laberinto[0][0] = '.';
	}
	if(paso(x,y)){
		laberinto[x][y] = '.';
	}
}
int main (){
	laberinto[6][1] = 'F';
	resolver(0,0);
	mostrar();
	return 0;
}
