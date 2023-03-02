#include<stdio.h>

int main(){

    float num;
    int qtd = 0;
    float soma = 0;
    float media;

    printf("digite um valor(0 para sair):\n");
    scanf("%f", &num);

    while( num != 0 ){
       soma = soma + num; //soma+=num
       qtd++;
    printf("digite um valor(0 para sair):\n");
    scanf("%f", &num);
    }
    media = soma / qtd;
    printf("A media e: %.2f\n", media);

    return 0;
}
