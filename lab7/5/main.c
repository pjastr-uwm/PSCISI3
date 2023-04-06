#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if(n==0)
        return 1;
    if (n==1)
        return 2;
    if (n%2 ==0)
        return foo(n-1)+2*n;
    return foo(n-2)*(2*n-1);
}

int main()
{
    printf("%d\n", foo(0));
    printf("%d\n", foo(1));
    printf("%d\n", foo(2));
    printf("%d\n", foo(3));
    printf("%d\n", foo(4));
    printf("%d\n", foo(5));
    return 0;
}
