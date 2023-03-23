#include <stdio.h>
#include <stdlib.h>

int dodaj(int a, int b)
{
    return a+b;
}

int odejmij(int a, int b)
{
    return a-b;
}

int main()
{
    int (*wsk)(int , int);
    wsk=dodaj;
    int n = 10, m=8;
    printf("%d\n", wsk(n, m));
    wsk = odejmij;
    printf("%d\n", wsk(n, m));
    return 0;
}
