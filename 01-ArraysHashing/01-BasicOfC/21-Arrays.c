#include <stdio.h>

int main()
{

    double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0, 30.0};

    printf("\n$%.2lf\n", prices[0]);

    // array with loops

    for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++){
        printf("\n$%.2lf", prices[i]);
    }

    return 0;
}