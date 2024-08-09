#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int dia, mes, ano;
} data;

int verificaDia(int *dia, int *mes, int *ano){
	data x;
	
	x.dia = *dia;
	x.mes = *mes;
	x.ano = *ano;
	
	return x.dia;
}

int main(){
	int dia, mes, ano;
	
	printf ("Dia: ");
	scanf ("%d", &dia);
	printf ("Mes: ");
	scanf ("%d", &mes);
	printf ("Ano: ");
	scanf ("%d", &ano);
	
	system ("cls");
	printf ("%d/%d/%d", dia, mes, ano);
	printf (" -> O dia da data informada e %d", verificaDia(&dia, &mes, &ano));
	
	return 0;
}
