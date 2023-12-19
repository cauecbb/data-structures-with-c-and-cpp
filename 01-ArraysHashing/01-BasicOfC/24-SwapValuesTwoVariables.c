#include <stdio.h>
#include <string.h>

int main()
{

    char x[15] = "Water";
    char y[15] = "Juice";
    char temp[15];

    strcpy(temp, x); // now temp = Water and x = null
    strcpy(x, y);    // now x = Juice and y = null
    strcpy(y, temp); // now y = Water

    printf("x = %s\n", x);
    printf("y = %s", y);

    return 0;
}