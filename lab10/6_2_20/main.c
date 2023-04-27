#include <stdio.h>
#include <stdlib.h>

void foo(int **tab1, int ** tab2, int n, int m)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            temp = tab1[i][j];
            tab1[i][j] = tab2[i][j];
            tab2[i][j] = temp;
        }
    }
}

void wyswietl(int n, int m, int **tab)
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
    int ** tab1= malloc(2*sizeof(int*));
    tab1[0] = malloc(3*sizeof(int));
    tab1[1] = malloc(3*sizeof(int));
    int ** tab2= malloc(2*sizeof(int*));
    tab2[0] = malloc(3*sizeof(int));
    tab2[1] = malloc(3*sizeof(int));
    tab1[0][0] = 6;
    tab1[0][1] = 4;
    tab1[0][2] = -4;
    tab1[1][0] = 12;
    tab1[1][1] = 99;
    tab1[1][2] = -3;
    tab2[0][0] = 11;
    tab2[0][1] = 22;
    tab2[0][2] = 33;
    tab2[1][0] =-9;
    tab2[1][1] = 33;
    tab2[1][2] = 5;
    wyswietl(2,3,tab1);
    wyswietl(2,3,tab2);
    foo(tab1, tab2,2,3);
    wyswietl(2,3,tab1);
    wyswietl(2,3,tab2);
    return 0;
}
