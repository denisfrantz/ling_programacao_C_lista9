#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int x, y;
} A;

typedef struct{
	int x2, y2;
} B;

void armazena(int *X, int *Y){
	A a;
	B b;
	
	a.x = *X;
	a.y = *Y;
	b.x2 = a.x;
	b.y2 = a.y;
	
	printf ("\nOs valores %d e %d foram armazenados em uma segunda struct", b.x2, b.y2);
}

int main(){
	int X, Y;
	
	printf ("X: ");
	scanf ("%d", &X);
	printf ("Y: ");
	scanf ("%d", &Y);
	
	armazena(&X, &Y);
	
	return 0;
}
