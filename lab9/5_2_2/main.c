#include <stdio.h>
#include <stdlib.h>

int dlugosc(char*napis)
{
    int i;
    for(i=0;napis[i] != 0; i++)
    {

    }
    return i;
}

int dlugosc2(char*napis)
{
    int i;
    while(napis[i] !=0)
    {
        i++;
    }
    return i;
}

int dlugosc3(char*napis)
{
    int i;
    while(napis[i])
    {
        i++;
    }
    return i;
}

int dlugosc4(char*napis)
{
    int i;
    while(*(napis+i))
    {
        i++;
    }
    return i;
}

int dlugosc5(char* napis)
{
    if (napis[0] == 0)
        return 0;
    return 1+ dlugosc5(++napis);
}

int dlugosc6(char* napis)
{
    if (!*napis)
        return 0;
    return 1+ dlugosc6(++napis);
}

int dlugosc7(wchar_t* napis)
{
    if (!*napis)
        return 0;
    return 1+ dlugosc7(++napis);
}

int main()
{
    printf("%d\n", dlugosc("abc"));
    printf("%d\n", dlugosc2("abc"));
    printf("%d\n", dlugosc3("abc"));
    printf("%d\n", dlugosc4("abc"));
    printf("%d\n", dlugosc5("abc"));
    printf("%d\n", dlugosc7(L"abc"));
    wprintf(L"%d\n", dlugosc7(L"abc"));
    return 0;
}
