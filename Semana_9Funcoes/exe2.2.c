#include<stdio.h>

void desenha(int num)
{
    int lin, col;

    for (lin = 1; lin <= num; lin++)
    {
        for (col = 0; col < lin; col++)
        {
            printf("!");
        }
        printf("\n");
    }
   
}
int main()
{
    int num;
    scanf("%d", &num);
    desenha(num);

    return 0;
}