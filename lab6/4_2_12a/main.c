#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[])
{
    for(int i=0;i<n/2;i++)
    {
        int temp = tab[i];
        tab[i] =  tab[n-1 -i];
        tab[n-1-i] = temp;
    }
}
void wyswietlTablice(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    printf("--\n");
}

int main()
{
    int tab[] = {2,-3,4,9};
    wyswietlTablice(4, tab);
    foo(4, tab);
    wyswietlTablice(4, tab);
    return 0;
}
