#include <stdio.h>

double square(double x)
{

    return x * x;
}

int main()
{

    double y = square(3.14);
    printf("\n%lf", y);

    return 0;
}