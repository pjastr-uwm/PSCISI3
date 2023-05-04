#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a,b,c;
};

float obwod(struct trojkat arg);

int main()
{
    struct trojkat tr = {3,4,5};
    printf("%f\n", obwod(tr));
    return 0;
}


float obwod(struct trojkat arg)
{
    return arg.a + arg.b + arg.c;
}
