#include<stdio.h>

int main(){

    float num;
    int qtd = 0;
    float soma = 0;
    float media;

    printf("digite um valor(0 para sair):\n");
    scanf("%f", &num);

    do{


    printf("digite um valor(0 para sair):\n");
    scanf("%f", &num);
    soma = soma + num; //soma+=num
    if(num)
    qtd++;

    }while( num != 0 )
    media = soma / qtd;
    printf("A media e: %.2f\n", media);

    return 0;
}
