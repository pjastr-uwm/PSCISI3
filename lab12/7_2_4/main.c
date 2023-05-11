#include <stdio.h>
#include <stdlib.h>

struct punkt
{
    int x,y,z;
};

void przepisz(struct punkt tab1[], struct punkt tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i]= tab1[i];
    }
}

void wyswietl(struct punkt tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]: %d %d %d\n", i, tab[i].x, tab[i].y, tab[i].z);
    }
    printf("---\n");
}

int main()
{
    struct punkt p1 = {2,3,4};
    struct punkt p2 = {-2,8,9};
    struct punkt tab[] = {p1,p2};
    struct punkt tab2[] =
    {
        {3,4,5},{-2,-8,3}
    };
    wyswietl(tab,2);
    wyswietl(tab2,2);
    przepisz(tab,tab2,2);
    wyswietl(tab,2);
    wyswietl(tab2,2);
    return 0;
}
