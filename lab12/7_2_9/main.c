#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int a;
    struct lista * wsk;
};

int main()
{
    struct lista * zm = malloc(sizeof(struct lista));
    zm->a = 7;
    zm->wsk = malloc(sizeof(struct lista));
    zm->wsk->a = 5;
    zm->wsk->wsk=NULL;
    return 0;
}
