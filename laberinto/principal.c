#include "laberinto.h"

int
main ()
{
  char laberinto[7][7] = {
    {' ', '#', '#', '#', '#', '#', '#'},
    {' ', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', '#', '#', '#', '#', ' ', '#'},
    {'#', ' ', ' ', ' ', ' ', ' ', '#'},
    {'#', ' ', '#', '#', ' ', '#', '#'},
    {'#', ' ', '#', '#', ' ', ' ', '#'},
    {'#', 'F', '#', '#', '#', '#', '#'},
  };
  int filas = (sizeof (laberinto) / sizeof (laberinto[0]));
  int columnas = (sizeof (laberinto[0]) / sizeof (laberinto[0][0]));
  
  resolver (laberinto, 0, 0);
  mostrar (laberinto, filas, columnas);
  
  return 0;
}
