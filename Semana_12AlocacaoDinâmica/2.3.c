#include <stdio.h>
#include <stdlib.h>

typedef struct sCliente{
    int telefone;
    char nome[40];
    int idade;
}Cliente;
  
int main(){
    int n, i;
    Cliente *ptr;
    printf("Entre com o numero de registros a serem alocados: ");
    scanf("%d", &n);
    /*alocando espaço para n iregistros*/
    ptr = (Cliente*)malloc(n * sizeof(Cliente));

    /*armazeando os n registros no espaço alocado*/
    for(i = 0 ; i < n; i++){
        
        printf("Nome: ");
        scanf("%s", &ptr[i].nome);
        printf("Idade: ");
        scanf("%d", &ptr[i].idade);
        printf("Numero de telefone: ");
        scanf("%d", &ptr[i].telefone);
        printf("\n\n");

    }
    /*mostrando os n registros armazenados*/
    printf("\t------------Matriculas Registradas------------\t\n\n");
    for(i = 0 ; i < n; i++){
        
        printf("Nome: %s \n" , ptr[i].nome);
        printf("Idade: %d\n\n" , ptr[i].idade);
        printf("Numero de telefone %d \n", ptr[i].telefone);
        printf("----------------------------\n");
    }
    /*desalocando o espaço utilizado anteriormente*/
    free(ptr);
    return 0;
}