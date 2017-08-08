#include <stdio.h>
#include <stdlib.h>

void sequencia(int n){
	int i, j;
	for( i = 0; i < n; i++ ){
		for(j = 0; j < i+1; j++){
			printf("%d ", i+1);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	
	printf("Digite o tamanho da sua sequencia: ");
	 scanf("%d", &n);
	 
	sequencia(n);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}