#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Osoba
{
    char imie[20];
    int wiek;
};

struct Osoba initOsoba(char im[50], int wk)
{
    struct Osoba temp;
    temp.wiek =wk;
    //strcpy(temp.imie,im);
    int i=0;
    for(i=0;im[i] !=0; i++)
    {
        temp.imie[i] = im[i];
    }
    temp.imie[i]=0;
    return temp;
};

void pokazOsoba (struct Osoba arg)
{
    printf("Imie: %s, wiek: %d\n", arg.imie, arg.wiek);
}

void urodziny(struct Osoba * wsk)
{
    wsk->wiek++;
}

int main()
{
    struct Osoba nowa = initOsoba("Patryk", 25);
    pokazOsoba(nowa);
    urodziny(&nowa);
    pokazOsoba(nowa);
    return 0;
}
