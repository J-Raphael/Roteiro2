#include <stdio.h>
#include <stdlib.h>

#define QUANTIDADE 10 // Tamanho do grupo.

typedef struct{
	double altura;
	char sexo;
}aux;

int main()
{	
	int i, contM = 0, contF = 0;
	double maior, menor, mediaM = 0, mediaF = 0;
	char sexMaior, sexMenor;
	aux aux[QUANTIDADE];
	
	for( i = 0; i < QUANTIDADE; i++){
		printf("Digite a altura e o sexo(M/F): ");
		 scanf("%lf %c*c", &aux[i].altura, &aux[i].sexo);
		
		if(aux[i].sexo == 'F'){
			mediaF += aux[i].altura;
			contF++;
		}
		if(aux[i].sexo == 'M'){
			mediaM += aux[i].altura;
			contM++;
		}
	}
	
	maior = aux[0].altura;
	sexMaior = aux[0].sexo;
	sexMenor = sexMaior;
	menor = maior;
	
	for( i = 1; i < QUANTIDADE; i++){
		if( maior < aux[i].altura){
			maior = aux[i].altura;
			sexMaior = aux[i].sexo;
		}
		if( menor > aux[i].altura){
			menor = aux[i].altura;
			sexMenor = aux[i].sexo;
		}
	}
	
	printf("\n\nA maior altura eh: %.2lf e seu sexo eh: %c\n", maior, sexMaior);
	printf("A menor altura eh: %.2lf e seu sexo eh: %c\n", menor, sexMenor);
	printf("A media de altura feminina eh: %.2lf\n", mediaF/contF);
	printf("A media de altura masculina eh: %.2lf\n", mediaM/contM);
	printf("O total feminino eh: %d\n", contF);
	printf("O total masculino eh: %d\n", contM);
	
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}