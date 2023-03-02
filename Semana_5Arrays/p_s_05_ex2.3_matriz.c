#include <stdio.h>

int main() {
    int mat[5][5];
    int x, y, n1, cont=0;
    
    printf("Digite a matriz: \n");
    for(x=0; x<5; x++){
        for(y=0; y<5; y++){
            printf("Digite o valor da posiçao mat[%d][%d]:", x,y);
            scanf("%d", &mat[x][y]);
            printf("\n");
        }
    }
    printf("Digite o numero que deseja procurar: ");
    printf("\n");
    scanf("%d",&n1);
    
    for(x=0; x<5; x++){
        for(y=0; y<5; y++){
            if (mat[x][y]==n1){
                printf("Numero encontrado em:\n");
                printf("mat[%d][%d] = %d\n", x, y, mat[x][y]);
            }
            else{
                cont++;
                
            }
        }
    }
    if(cont==25){
        printf("Numero não encontrado!!");
    }
    return 0;
}