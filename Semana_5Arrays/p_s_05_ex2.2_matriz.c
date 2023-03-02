#include <stdio.h>

int main() {
    int mat[3][3];
    int x, y;
    int maior=0, menor=2147483647;
    
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            printf("Digite o valor da posiçao mat[%d][%d]:", x,y);
            scanf("%d", &mat[x][y]);
            printf("\n");
        }
    }
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            if(mat[x][y]>maior){
                maior = mat[x][y];
            }
        }
    }
    for(x=0; x<3; x++){
        for(y=0; y<3; y++){
            if(mat[x][y]<menor){
                menor = mat[x][y];
            }
        }
    }
    printf("\n");
    printf("O maior numero eh: %d\n", maior);
    printf("O menor numero eh: %d\n", menor);
    
    return 0;
}