#include <stdio.h>
#include <stdlib.h>

int* foo()
{
    return malloc(sizeof(int));
}

double* foo10()
{
    return malloc(sizeof(double));
}

int main()
{
    printf("%p\n", foo());
    printf("%p\n", foo10());
    return 0;
}
