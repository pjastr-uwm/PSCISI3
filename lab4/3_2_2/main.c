#include <stdio.h>
#include <stdlib.h>

int* foo(int*x, int*y)
{
    if(*x > *y)
        return y;
    return x;
}

int main()
{
    int x=1, y=3;
    printf("Adres x %p\n", &x);
    printf("Adres y %p\n", &y);
    printf("%p\n", foo(&x,&y));
    return 0;
}
