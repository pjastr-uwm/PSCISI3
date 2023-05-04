#include <stdio.h>
#include <stdlib.h>

int *** alokuj(int n, int m, int k)
{
    int *** temp = malloc(n*sizeof(int**));
    for(int i=0;i<n;i++)
    {
        temp[i] = malloc(m*sizeof(int*));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp[i][j] = malloc(k*sizeof(int));
        }
    }
    return temp;
}

void zwolnij(int *** tab, int n, int m, int k)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            free(tab[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);

}

int main()
{
    int *** tab= alokuj(3,4,5);
    zwolnij(tab, 3,4,5);
    return 0;
}
