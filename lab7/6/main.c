#include <stdio.h>
#include <stdlib.h>

int foo(int m, int n, int tab[])
{
    if (n<0)
        return 0;
    if (n==0)
    {
        return tab[0];
    }
    int suma=0;
    for(int i=n;i<m;i+=n)
    {
        suma += tab[i];
    }
    return suma;
}

int main()
{
    int tab[] = {3,-4,5,6,7};
    printf("%d\n", foo(5, 2, tab));
    return 0;
}
