#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x, y;
} retorno;

void armazena(int A, int B){
	retorno num;
	
	num.x = A;
	num.y = B;
	
	printf ("\nOs parametros recebidos foram %d e %d", num.x, num.y);
}

int main(){
	int A, B;
	
	printf ("X: ");
	scanf ("%d", &A);
	printf ("Y: ");
	scanf ("%d", &B);
	
	armazena(A, B);
	
	return 0;
}
