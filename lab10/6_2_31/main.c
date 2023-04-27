#include <stdio.h>
#include <stdlib.h>

int ** foo(int n, int tab1[][n], int tab2[][n])
{
    int ** temp = malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        temp[i] = malloc(n*sizeof(int));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp[i][j] = tab1[i][j]+tab2[i][j];
        }
    }
    return temp;
}
void wyswietl(int n, int m, int tab[][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

void wyswietl_wynik(int n, int m, int **tab)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int t1[3][3] = {{3,-4,1},{3,8,9},{11,-23,7}};
    int t2[3][3] = {{1,8,2},{-2,9,3},{7,5,-7}};
    wyswietl(3,3,t1);
    wyswietl(3,3,t2);
    int ** wynik = foo(3, t1, t2);
    wyswietl_wynik(3,3,wynik);
    return 0;
}
