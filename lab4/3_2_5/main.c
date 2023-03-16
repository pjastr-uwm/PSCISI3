#include <stdio.h>
#include <stdlib.h>

int foo(int const *x, int const*y)
{
    return *x+*y;
}

int main()
{
    int x=3, y=8;
    printf("%d\n", foo(&x,&y));
    return 0;
}
