#include<stdio.h>


int elevado(int x, int z)
{
    int i;
    int res = 1;

    for(i=1;i<=z;i++)
    {
        res=res*x;
    }
    return res;
}
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", elevado(a,b));
    return 0;
}
