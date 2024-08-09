#include <stdio.h>
#include <stdlib.h>

struct numeros{
	int x, y;
};

void troca(int *num1, int *num2){
	int aux;
	
	aux = *num1;
	*num1 = *num2;
	*num2 = aux;
}

int main(){
	struct numeros a;
	
	printf ("X: ");
	scanf ("%d", &a.x);
	printf ("Y: ");
	scanf ("%d", &a.y);
	
	system ("cls");
	printf ("STRUCT ORIGINAL\n===============\n");
	printf ("X: %d\nY: %d", a.x, a.y);
	
	printf ("\n\nSTRUCT INVERTIDA\n================\n");
	troca(&a.x, &a.y);
	printf ("X: %d\nY: %d", a.x, a.y);
	
	
	return 0;
}
