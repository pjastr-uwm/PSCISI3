#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int foo(int n, int m)
{
    int temp =1;
    while(temp<n+m)
    {
        temp *=2;
    }
    return temp/2;
}

int foo2(int n, int m)
{
    return pow(2, ceil(log2(n+m))-1 );
}

int main()
{
    printf("%d\n",foo2(4,5));
    printf("%d\n",foo2(1,1));

    return 0;
}
