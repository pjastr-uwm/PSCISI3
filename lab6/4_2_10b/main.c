#include <stdio.h>
#include <stdlib.h>

int foo(int n, int *tab)
{
    int temp = *tab;
    for(int i=1;i<n;i++)
    {
        if (temp > *(tab+i) )
        {
            temp = *(tab+i);
        }
    }
    return temp;
}

int main()
{
    int * tab = malloc(5*sizeof(int));
    * tab = 4;
    * (tab+1)  = -78;
    * (tab+2)  = 55;
    * (tab+3)  = 11;
    * (tab+4)  = -13;
    printf("%d\n", foo(5, tab));
    return 0;
}
