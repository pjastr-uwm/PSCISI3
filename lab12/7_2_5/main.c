#include <stdio.h>
#include <stdlib.h>

struct punkt10
{
    int wspolrzedne[10];
};

void przepisz(struct punkt10 tab1[], struct punkt10 tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i]= tab1[i];
    }
}

void wyswietl(struct punkt10 tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]: ", i);
        for(int j=0;j<10;j++)
        {
            printf("%d ", tab[i].wspolrzedne[j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    struct punkt10 tab[] =
    {
        {.wspolrzedne={3,4,5}},
        {.wspolrzedne={-2,-8}},
        {.wspolrzedne={1,2,3,4,5,6,7,8,9,10}},
        {.wspolrzedne={39, 11}}
    };
    struct punkt10 tab2[] =
    {
        {{9,6}},{{7}},{{-4,-4,5,-5}},{{-2,-8}}
    };
    wyswietl(tab,4);
    wyswietl(tab2,4);
    przepisz(tab,tab2,4);
    wyswietl(tab,4);
    wyswietl(tab2,4);
    return 0;
}
