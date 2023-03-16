#include <stdio.h>
#include <stdlib.h>

void foo(int const*x, int*const y)
{
    *y=*x;
}

int main()
{
    int x=8, y=3;
    printf("x=%d, y=%d\n", x,y);
    foo(&x,&y);
    printf("x=%d, y=%d\n", x,y);
    return 0;
}
