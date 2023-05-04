#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a,b,c;
};

void foo(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2=troj1;
}

int main()
{
    struct trojkat tr = {3,4,5};
    printf("%f %f %f\n", tr.a, tr.b, tr.c);
    struct trojkat * wsk = malloc(sizeof(struct trojkat));
    wsk->a = 4;
    wsk->b = -34;
    wsk->c = 11;
    printf("%f %f %f\n", wsk->a, wsk->b, wsk->c);
    foo(tr, wsk);
    printf("%f %f %f\n", wsk->a, wsk->b, wsk->c);
    wsk->b = 100;
    printf("%f %f %f\n", tr.a, tr.b, tr.c);
    printf("%f %f %f\n", wsk->a, wsk->b, wsk->c);
    return 0;
}

