#include <stdio.h>
#include <stdlib.h>

int ** alokuj(int n, int m)
{
    int ** temp = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        temp[i] = malloc(m*sizeof(int));
    }
    return temp;
}

void zwolnij(int ** tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);

}

int main()
{
    int ** tab = alokuj(2,3);
    printf("%p\n", tab);
    zwolnij(tab,2,3);
    return 0;
}
