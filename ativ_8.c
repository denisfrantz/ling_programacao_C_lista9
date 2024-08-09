#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[30], endereco[30];
} dados;

int main(){
	dados *x;
	
	x = (dados*) malloc(sizeof(dados));
	
	printf ("LEITURA DA STRUCT\n=================\n");
	printf ("Nome: ");
	gets (x->nome);
	printf ("Endereco: ");
	gets (x->endereco);
	
	printf ("\nIMPRESSAO DA STRUCT\n===================\n");
	printf ("Nome: ");
	puts (x->nome);
	printf ("Endereco: ");
	puts (x->endereco);
	
	free(x);
	
	return 0;
}

