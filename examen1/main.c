#include <stdio.h>
#include <math.h>
void calcular(float cuota,float i, float tabla[][5], int contador, float saldo,int periodo){
	
	if(saldo>1){
		float intereses,abono;
		intereses = saldo * i;
		abono = cuota - intereses;
		saldo = saldo - abono;
		
		for(int i=0;i<5;i++){
			if(i==0){
				tabla[i][contador]= periodo;
			}
			if(i==1){
				tabla[i][contador]=cuota;
			}
			if(i==2){
				tabla[i][contador]=intereses;
			}
			if(i==3){
				tabla[i][contador]=abono;
			}
			if(i==4){
				tabla[i][contador]=saldo;
			}
		}
		periodo++;
		contador++;
		calcular(cuota,i,tabla,contador,saldo,periodo);
	}	
}

void mostrar(float tabla[][5]){
	int i,j;
	for (i=0; i<5; i++) {
		for(j=0; j<5; j++){
			printf("| %.2f ",tabla[j][i]);
		}
		printf("\n");
	}
}

int main(){
	int p=500000;
	int n = 5, contador=0;
	float i=0.08;
	float cuota;
	int periodo=1;
	double elevado = pow(1+i,n);
	float tabla [5][5];
	cuota = p *((elevado * i)/(elevado-1));
/*	printf("elevado es %f. La cuota es %.2f \n",elevado,cuota);*/
	calcular(cuota,i,tabla,contador,p,periodo);
	mostrar(tabla);
	return 0;
}
