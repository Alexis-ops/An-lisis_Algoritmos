#include <stdio.h>

void TOH(int n,char inicio, char aux,char destino) /*4*/
{ 
	if(n==1) 
	{
		printf("%i| %c -> %c \n",n,inicio,destino);
		 
		return;
	}
	TOH(n-1,inicio,destino,aux);
	printf("%i| %c -> %c \n",n,inicio,destino);
	TOH(n-1,aux,inicio,destino);
}
int main()/*2*/
{ 
	int n=5;
	TOH(n,'A','B','C');
	return 0;
}
