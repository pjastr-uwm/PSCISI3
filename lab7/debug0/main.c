#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-*b;
}

int main()
{
    int tab[] = {5,5,-4,0,2,-3,0,-2,3,9};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=0
    int c = b+3; // b=0  , c=3
    int d = foo(&b,&c); // b=0  , c=3  , d=-3
    int e = (wsk+=-1)[3]; // b=0  , c=3  , d=-3  , e=-3
    e = (d -= 2) + (c += 2); // b=0  , c=5  , d=-5  , e=0
    c = d + (b+=4); // b=4  , c=-1  , d=-5  , e=0
    b = *wsk + e; // b=-4  , c=-1  , d=-5  , e=0
    b= (--c)-(d++);  // b=3  , c=-2  , d=-4  , e=0
    return 0;
}
