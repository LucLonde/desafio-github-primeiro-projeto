#include<stdio.h>

int teste(int l1, int l2, int l3)
{
    if(l1 >= l2 + l3)
    {
        return 0;
    }
    if(l2 >= l1+l3)
    {
        return 0;
    }
    if(l3 >= l1 + l2)
    {
        return 0;
    }
    return 1;
}

void tipo(int a, int b, int c)
{
    if(a == b && a == c && b == c)
    {
        printf("Equilatero.\n");
    }
    else if((a == b && a != c) || (a == c && a!=b) || (b == c && b != a))
    {
        printf("Isoceles.\n");
    }
    else
    {
        printf("Escaleno.\n");
    }
}
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if(teste(a, b, c))
    {
        tipo(a, b, c);
    }
    else
    {
        printf("NAO\n");
    }
    return 0;
}
