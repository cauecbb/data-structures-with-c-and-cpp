#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    const int MIN = 1;
    const int MAX = 100;
    int guess;
    int guesses;
    int answer;

    // uses the current time as a seed
    srand(time(0));

    // generate a random number between MIN and MAX
    answer = (rand() % MAX) + MIN;

    do
    {
        printf("Enter a guess: ");
        scanf("%d", &guess);
        if (guess > answer)
        {
            printf("Too high!\n");
        }
        else if (guess < answer)
        {
            printf("Too low. \n");
        }
        else
        {
            printf("\nCORRECT!\n");
        }
        guesses++;
    } while (guess != answer);

    printf("\n****************************\n");
    printf("\nanswer: %d\n", answer);
    printf("answer: %d\n", guesses);
    printf("\n****************************\n\n");

    return 0;
}