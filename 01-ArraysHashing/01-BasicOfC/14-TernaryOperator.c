#include <stdio.h>

int findMaxNumber(int x, int y)
{
    return (x > y) ? x : y;
}

int main()
{
    int max = findMaxNumber(3, 4);

    printf("%d", max);

    return 0;
}