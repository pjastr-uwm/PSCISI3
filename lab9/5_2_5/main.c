#include <stdio.h>
#include <stdlib.h>

void przepisz(char napis1[], char napis2[])
{
    int i;
    for(i=0; napis1[i] !=0;i++)
    {
        napis2[i] = napis1[i];
    }
    napis2[i]=0;
}

int main()
{
    char napis[] ="ABC";
    char napis2[20];
    char napis3[] = "Olsztyn";
    przepisz(napis, napis2);
    printf("%s %s\n", napis, napis2);
    przepisz(napis, napis3);
    printf("%s %s\n", napis, napis3);
    return 0;
}
