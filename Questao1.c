#include <stdio.h>
#include <stdlib.h>

int converte(int horas, int minutos)
{
	if( horas < 12 ){
		printf("%d:%d A.M\n", horas, minutos);
	}
	else{
		int x = horas - 12;
		if( x == 0){
			printf("%d:%d P.M\n", horas, minutos);
		}
		else{
			printf("%d:%d P.M\n", x, minutos);
		}
	}
}


int main()
{
	int horas, minutos;
	
	printf("Digite a hora e os minutos: ");
	 scanf("%d %d", &horas, &minutos);
	 
	converte(horas, minutos);
	
	printf("\n\n");
	system("PAUSE");
	return 0;
}