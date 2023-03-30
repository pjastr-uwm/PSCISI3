#include <stdio.h>
#include <stdlib.h>

void fooa(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i) = 0;
    }
}

void wyswietlTablice(int n, int * tab)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n", i, *(tab+i));
    }
    printf("--\n");
}

int main()
{
    int * tab2 = malloc(2*sizeof(int));
    *tab2 = 3;
    *(tab2+1) = -4;
    wyswietlTablice(2, tab2);
    fooa(2,tab2);
    wyswietlTablice(2, tab2);
    return 0;
}
