#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    int wa = a;
    if (a<0)
    {
        wa = -a;
    }
    int wb = b;
    if (b<0)
    {
        wb = -b;
    }
    if (wa < wb)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",a);
    }
    return 0;
}
