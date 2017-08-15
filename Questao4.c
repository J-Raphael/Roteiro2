#include <stdio.h>
#include <stdlib.h>

//#define limpa_tela()  system("cls")// Ativo no Windows.
#define limpa_tela()  system("clear") // Ativar no Linux.
#define Pause()  getchar()



int eh_divisivel(int x, int y){
	if( x%y == 0){
		return 1;
	}
	else{
		return 0;
	}
}

int eh_primo(int x){
	int i, cont = 0;
	
	for( i = 1; i <= x; i++){
		if( eh_divisivel(x, i)){
			cont ++;
		}
	}
	
	if( cont == 2){
		return 1;
	}
	else{
		return 0;
	}
}

int menu(){
	int opcao;
	do{			
//		limpa_tela();
		printf("-------------------\n");
		printf("|1------- eh_primo|\n");
		printf("|2--- eh_divisivel|\n");
		printf("|0------------sair|\n");
		printf("-------------------\n");
		printf("Opcao: ");
		 scanf("%d", &opcao);
	}while(opcao < 0 || opcao > 2 );
	return opcao;
	
}

void verifica_Primo(){
	int n;
	printf("Digite um numero: ");
	 scanf("%d", &n);
	 
	 
	if(eh_primo(n)){
		printf("O numero %d eh primo.\n\n", n);
	}
	else{
		printf("O numero %d nao eh primo.\n\n", n);
	}
	Pause();
}

void verifica_Divisivel(){
	int x, y;
	printf("Digite dois numeros: ");
	 scanf("%d %d", &x, &y);
	 
	 
	if(eh_divisivel(x, y)){
		printf("O numero %d eh divisivel por %d.\n\n", x, y);
	}
	else{
		printf("O numero %d nao eh divisivel por %d.\n\n", x, y);
	}
	Pause();
}

int main()
{
	int x;
	do{
//		limpa_tela();
		x = menu();
		if( x == 1){ verifica_Primo();}
		if( x == 2){ verifica_Divisivel();}
	}while(x != 0);

	return 0;
}
