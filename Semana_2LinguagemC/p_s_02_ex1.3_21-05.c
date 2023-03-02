#include<stdio.h>
#include<stdlib.h>

int main()
{

    int qtd;
    char codigo;
    float valor = 0;
    
    
    printf("------------MENU------------\n");
    printf("A - Cachorro quente: R$ 1.20\n");
    printf("B - Bauru simples: --R$ 1.30\n");
    printf("C - Bauru com ovo: --R$ 1.50\n");
    printf("D - Hamburgues: -----R$ 1.20\n");
    printf("E - Cheeseburguer: --R$ 1.70\n");
    printf("F - Suco R$ ---------R$ 2.20\n");
    printf("G - Refrigerante: ---R$ 2.00\n");

    printf("Digite o codigo do pedido e a quantidade:\n");
    scanf("%c", &codigo);
    scanf("%d", &qtd);

    switch ( codigo )
    {
        
        case 'a':
        case 'A': 
        valor = qtd * 1.20;
        printf("O valor do pedido eh: %.2f\n", valor);
        break;

        case 'b':
        case 'B': 
        valor = qtd * 1.30;
        printf("O valor do pedido eh: %.2f\n", valor);
        break;

        case 'c':
        case 'C': 
        valor = qtd * 1.50;
        printf("O valor do pedido eh: %.2f\n", valor);
        break;

        case 'd':
        case 'D': 
        valor = qtd * 1.20;
        printf("O valor do pedido eh: %.2f\n", valor);
        break;

        case 'e':
        case 'E': 
        valor = qtd * 1.70;
        printf("O valor do pedido eh: %.2f\n", valor);
        break;

        case 'f':
        case 'F': 
        valor = qtd * 2.20;
        printf("O valor do pedido eh: %.2f\n", valor);
        break;

        case 'g':
        case 'G': 
        valor = qtd * 2.00;
        printf("O valor do pedido eh: %.2f\n", valor);
        break;

        default:
        printf("Codgio Invalido\n");
    }

    getch();
    return 0;
}