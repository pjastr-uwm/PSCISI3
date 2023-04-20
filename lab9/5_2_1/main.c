#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void wyczysc(char*napis)
{
    napis[0] = '\0';
    // napis[0] = 0;
}

void wyczysc2(wchar_t*napis)
{
    napis[0] = '\0';
}

int main()
{
    setlocale(LC_ALL,"");
    char napis[] = "Olsztyn";
    wyczysc(napis);
    printf("%s.\n", napis);
    wchar_t napis2[] = L"Olsztynąęół";
    wprintf(L"%s.\n", napis2);
    wyczysc2(napis2);
    wprintf(L"%s.\n", napis2);
    return 0;
}
