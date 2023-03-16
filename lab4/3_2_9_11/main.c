#include <stdio.h>
#include <stdlib.h>

int* foo9()
{
    return malloc(sizeof(int));
}

int* foo11(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    int * wsk1 = foo9();
    printf("%p\n", wsk1);
    int * wsk2 = foo11(6);
    printf("%p\n", wsk2);
    free(wsk1);
    free(wsk2);
    return 0;
}
