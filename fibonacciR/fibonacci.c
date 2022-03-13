#include <stdio.h>

/*int factorial(int n) {
	if(n == 0) {
		return 1;
	} else {
		return n * factorial(n-1);
	}
}*/

int fibbonacci(int n) {
	if(n == 0){ /* 1*/
		return 0; 
	} else if(n == 1) {  
		return 1;
	} else {
		return (fibbonacci(n-1) + fibbonacci(n-2));
	}
}

int main() {
int n = 5;  /*1*/
int i=0; 
	printf("%d: " , n); 

	for(i ;i<n;i++) { /*n*/
		printf("%d ",fibbonacci(i));            
	}
}
