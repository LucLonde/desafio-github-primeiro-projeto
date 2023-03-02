#include<stdio.h>
#include<stdlib.h>

int main()
{
    int matricula;
    float nota;

    printf("Digite a matricula e a nota do aluno:  ");
    scanf("%d %f", &matricula, &nota);

    if (nota>=9)
    {
        printf("%d\nConceito A\n", matricula);
    }
    else if (nota>=8 && nota<9)
    {
        printf("%d\nConceito B\n", matricula);
    }
    else if (nota>=6 && nota<8)
    {
        printf("%d\nConceito C\n", matricula);
    }
    else if (nota>=3 && nota<6)
    {
        printf("%d\nConceito D\n", matricula);
    }
    else if (nota<3)
    {
        printf("%d\nConceito E\n", matricula);
    }

    return 0;   
}