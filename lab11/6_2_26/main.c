#include <stdio.h>
#include <stdlib.h>

int ** foo(int ** tab, int n, int m)
{
    int ** temp = malloc(m*sizeof(int*));
    for(int i=0;i<m;i++)
    {
        temp[i] = malloc(n*sizeof(int));
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp[i][j] = tab[j][i];
        }
    }
    return temp;
}

void wyswietl(int ** tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d][%d]=%d, ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int ** tab= malloc(2*sizeof(int *));
    tab[0] = malloc(4*sizeof(int));
    tab[1] = malloc(4*sizeof(int));
    tab[0][0]=-3;
    tab[0][1]=4;
    tab[0][2]=5;
    tab[0][3]=7;
    tab[1][0]=8;
    tab[1][1]=7;
    tab[1][2]=-1;
    tab[1][3]=12;
    wyswietl(tab,2,4);
    int ** wynik = foo(tab,2,4);
    wyswietl(wynik, 4,2);
    return 0;
}
