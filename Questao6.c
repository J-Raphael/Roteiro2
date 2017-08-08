#include <stdio.h>
#include <stdlib.h>

int eh_numero( char c){
	if( c == '0'){ return 1;}
	if( c == '1'){ return 1;}
	if( c == '2'){ return 1;}
	if( c == '3'){ return 1;}
	if( c == '4'){ return 1;}
	if( c == '5'){ return 1;}
	if( c == '6'){ return 1;}
	if( c == '7'){ return 1;}
	if( c == '8'){ return 1;}
	if( c == '9'){ return 1;}
	return 0;
}

int main()
{	
	int i, cont = 0;
	char num[15], numero[15];
	printf("Valida e corrige numero de telefone\n");
	printf("Telefone: ");
	 scanf("%s", num);
	
	numero[0] = '3';
	
	for( i = 0; num[i] != '\0'; i++ ){
		if( eh_numero( num[i] )){ 
			cont++ ;
			numero[cont] = num[i];
		}
	}
	
	numero[cont + 1] = '\0';
	
	if( cont < 7){
		printf("\nTelefone invalido.\n\n");
	}
	if( cont == 7){
		printf("Telefone possui 7 digitos. Vou acrescentar o digito tres na frente.\n");
		printf("Telefone corrigido sem formatacao: %s\n\n", numero);
	}
	if( cont > 7){
		printf("Telefone valido.\n\n");
	}
	
	system("PAUSE");
	return 0;
}
