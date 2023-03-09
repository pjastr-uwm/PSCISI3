#include <stdio.h>
#include <stdlib.h>

int foo(int n, int m)
{
    if (m == 0)
        return n;
    if (n<m)
        return foo(m,n);
    return n-m+foo(n-1,m)+foo(n,m-1);
}

int main()
{
    printf("%d\n", foo(0,0));
    printf("%d\n", foo(0,1));
    printf("%d\n", foo(1,0));
    printf("%d\n", foo(0,7));
    printf("%d\n", foo(7,0));
    printf("%d\n", foo(2,2));
    return 0;
}
