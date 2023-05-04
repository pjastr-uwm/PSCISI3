#include <stdio.h>
#include <stdlib.h>

struct Punkt2D
{
    float a;
    float b;
};

int main()
{
    struct Punkt2D zmienna = { 4,5.2};
    printf("%f\n", zmienna.a);
    return 0;
}
