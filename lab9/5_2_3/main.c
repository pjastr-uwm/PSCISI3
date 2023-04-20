#include <stdio.h>
#include <stdlib.h>

int porownaj(wchar_t* napis1, wchar_t* napis2)
{
    int i;
    for(i=0; napis1[i] !=0 && napis2[i] !=0;i++)
    {
        if (napis1[i] != napis2[i])
            return 0;
    }
    if(napis1[i] !=0)
        return 0;
    if(napis2[i] !=0)
        return 0;
    return 1;
}

int main()
{
    wchar_t napis1[] =L"ABC";
    wchar_t napis2[] = L"ABCDE";
    printf("%d\n", porownaj(napis1, napis2));
    return 0;
}
