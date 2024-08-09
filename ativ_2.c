#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[50];
	float valor;
} produtos;

int main(){
	produtos x[10];
	int i;
	
	printf ("REGISTRO DE PRODUTOS\n====================");
	for (i = 0; i < 10; i++){
		printf ("\n[%d] Produto: ", i + 1);
		fflush (stdin);
		fgets (x[i].nome, 50, stdin);
		printf ("Valor: ");
		scanf ("%f", &x[i].valor);
	}
	
	system ("cls");
	printf ("REGISTRO DE PRODUTOS\n====================");
	for (i = 0; i < 10; i++){
		printf ("\n[%d] Produto: %s", i + 1, x[i].nome);
		printf ("Valor: %.2f", x[i].valor);
		printf ("\n");
	}
	
	return 0;
}
