#include <stdio.h>
#include <stdlib.h>

int foo(int*x, int*y)
{
    if(*x > *y)
        return *y;
    return *wsk1;
}

int main()
{
    int x=8, y=3;
    printf("%d\n", foo(&x,&y));
    return 0;
}
