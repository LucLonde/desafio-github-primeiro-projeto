#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Declaração das variaveis e as inicializa
    int num, i=1;
    
    float fator;

    printf("Digite o numero que deseja calcular o fatorial: ");
    scanf("%d", &num);
    fator = 1; //inicializa variavel

    do{
    fator = fator * i; // fotoração por todos produto dos numeros inteiros
    i++; //incrementa variavel

    //verifica a condição
    } while (i <= num);

    printf("O resultado eh: %.0f\n", fator);

    return 0;
}



