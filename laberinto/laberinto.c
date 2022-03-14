#include "laberinto.h"
void
mostrar (char laberinto[][9], int filas, int columnas)
{
  for (int i = 0; i < filas; i++)
    {
      for (int j = 0; j < columnas; j++)
	{
	  printf ("%c", laberinto[i][j]);
	}
      printf ("\n");
    }
}

bool
paso (char laberinto[][9],int x, int y)
{
  if (laberinto[x][y] == 'F')
    {
      return true;
    }
  if (laberinto[x][y] == '#' || laberinto[x][y] == '.')
    {
      return false;
    }
  laberinto[x][y] = '.';
  bool resultado;
  resultado = paso (laberinto, x, y + 1);
  if (resultado)
    {
      return true;
    }
  resultado = paso (laberinto, x, y - 1);
  if (resultado)
    {
      return true;
    }
  resultado = paso (laberinto, x + 1, y);
  if (resultado)
    {
      return true;
    }
  resultado = paso (laberinto, x - 1, y);
  if (resultado)
    {
      return true;
    }
  laberinto[x][y] = ' ';
  return false;
}

void
resolver (char laberinto[][9],int x, int y)
{
  if (laberinto[x][y] == laberinto[0][0])
    {
      x = 1;
      laberinto[0][0] = '.';
    }
  if (paso (laberinto, x, y))
    {
      laberinto[x][y] = '.';
    }
}
