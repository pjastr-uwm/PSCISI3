#include <stdio.h>
#include <stdlib.h>

struct punktn
{
    int n;
    int * wspolrzedne;
};

void przepisz(struct punktn tab1[], struct punktn tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i].n = tab1[i].n;
        tab2[i]. wspolrzedne = malloc(tab2[i].n * sizeof(int));
        for(int j=0;j<tab1[i].n;j++)
        {
            tab2[i].wspolrzedne[j] = tab1[i].wspolrzedne[j];
        }
    }
}

void wyswietl(struct punktn tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]: ", i);
        for(int j=0;j<tab[i].n;j++)
        {
            printf("%d ", tab[i].wspolrzedne[j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    struct punktn p1;
    p1.n = 4;
    p1.wspolrzedne = malloc(p1.n *sizeof(int));
    p1.wspolrzedne[0] = 8;
    p1.wspolrzedne[1] = -3;
    p1.wspolrzedne[2] = 2;
    p1.wspolrzedne[3] = 11;
    struct punktn p2;
    p2.n = 5;
    p2.wspolrzedne = (int []) {3,-2,3,4,-9};
    struct punktn tab1[] = {p1,p2};
    wyswietl(tab1,2);
    struct punktn tab2[] =
    {
        {5, (int []) {6,7,-23,2,2}},
        {1, (int []) {9}}
    };
    wyswietl(tab2,2);
    przepisz(tab1,tab2,2);
    wyswietl(tab1,2);
    wyswietl(tab2,2);
    printf("%p\n", tab1[0].wspolrzedne);
    printf("%p\n", tab2[0].wspolrzedne);
    return 0;
}
