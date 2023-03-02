#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int i,j,x,y;
	char l1;

    printf("Digite a letra: ");
    scanf("%c", l1);
    
    printf("Digite a numero: ");
    scanf("%d", x);

	

	printf("De o numero de linhas do quadrado\n");
	scanf("%i", &x);
	printf("De o numero de colunas do quadrado\n");
	scanf("%i", &y);
		for(i=1;i<=x;i++)
		{
		for(j=1;j<=y;j++)
		{
			printf("%c", l1);
		}
			printf("\n");
		}
		return 0;
}    