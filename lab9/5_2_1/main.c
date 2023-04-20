#include <stdio.h>
#include <stdlib.h>

void wyczysc(char*napis)
{
    napis[0] = '\0';
    // napis[0] = 0;
}

int main()
{
    char napis[] = "Olsztyn";
    wyczysc(napis);
    printf("%s.\n", napis);
    return 0;
}
