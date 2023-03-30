#include <stdio.h>
#include <stdlib.h>

void fooa(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i] = 0;
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
    int tab[] = {3,4,5,6,-3};
    int tab2[] = {3,-4};
    wyswietlTablice(5, tab);
    wyswietlTablice(2, tab2);
    fooa(5,tab);
    fooa(2,tab2);
    wyswietlTablice(5, tab);
    wyswietlTablice(2, tab2);
    return 0;
}
