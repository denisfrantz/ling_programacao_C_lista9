#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int dia, mes, ano;
} data;

void copia(data dt1, data dt2){
	dt1.dia = dt2.dia;
	dt1.mes = dt2.mes;
	dt1.ano = dt2.ano;
	
	printf("\nA data 'dt2' %d/%d/%d foi armazenada em 'dt1'", dt1.dia, dt1.mes, dt1.ano);
}

int main(){
	data da, db;
	
	printf("1a DATA\n=======\n");
	printf ("Dia: ");
	scanf("%d",&da.dia);
	printf ("Mes: ");
	scanf("%d",&da.mes);
	printf ("Ano: ");
	scanf("%d",&da.ano);
	
	printf("\n2a DATA\n=======\n");
	printf ("Dia: ");
	scanf("%d",&db.dia);
	printf ("Mes: ");
	scanf("%d",&db.mes);
	printf ("Ano: ");
	scanf("%d",&db.ano);
	
	copia(da, db);

	return 0;
}

