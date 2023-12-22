#include <stdio.h>
#include <ctype.h>

int main()
{

    char questions[][100] = {"1. Who is the best developer?????????????????????????????????\n",
                             "2. Why should you hire me?\n",
                             "3. Who is best person in the whole world for you to hire???\n"};

    char options[][100] = {
        "A. Me",
        "B. The Indian Guy",
        "C. Bill Gates",
        "D. CAUEEEEEE CBB",
        "A. I won't hire you.",
        "B. Because you are the best",
        "C. I don't know",
        "D. I want to eat noodles.",
        "A. Answer B",
        "B. Answer D",
        "C. CAUEEEEEE CBB",
        "D. Answer C ",
    };

    char answers[3] = {'D', 'B', 'C'};

    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score;

    printf("QUIZ GAME\n");

    for (int i = 0; i < numberOfQuestions; i++)
    {
        printf("\n******************\n");
        printf("%s\n", questions[i]);

        for (int j = (i * 4); j < (i * 4) + 4; j++)
        {
            printf("%s\n", options[j]);
        }
        printf("\n******************\n");
        printf("\nguess: ");
        scanf("%c", &guess);
        getchar();

        guess = toupper(guess);

        if (guess == answers[i])
        {
            printf("\nCORRECTTTT!!!\n");
            score++;
        }
        else
        {
            printf("\nWRONG BRO.\n");
        }
    }

    printf("\n******************\n");
    printf("\nFINAL SCORE: %d/%d\n", score, numberOfQuestions);
    printf("\n******************\n");

    return 0;
}