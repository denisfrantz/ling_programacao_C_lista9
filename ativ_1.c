#include <stdio.h>
#include <stdlib.h>

typedef struct{
	char nome[30], endereco[50];
	int idade;
} pessoa;

void scan(){
	pessoa dados;
	
	printf ("LEITURA DA STRUCT\n=================\n");
	printf ("Nome: ");
	fgets (dados.nome, 30, stdin);
	printf ("Idade: ");
	scanf ("%d", &dados.idade);
	fflush (stdin);
	printf ("Endereco: ");
	fgets (dados.endereco, 50, stdin);
}

void imprime(){
	pessoa dados;
	
	printf ("\nIMPRESSAO DA STRUCT\n===================\n");
	printf ("Nome: %s", dados.nome);
	printf ("Idade: %d", dados.idade);
	printf ("\nEndereco: %s", dados.endereco);
}

int main(){
	scan();
	imprime();
	
	return 0;
}
