#include <stdio.h>

int main()
{

    FILE *pF = fopen("test.txt", "a"); // "w" write, "a" append, "r" read

    fprintf(pF, "\nCoding in C");

    fclose(pF);

    // if (remove("text.txt") == 0)
    // {
    //     printf("That file was deleted successfully!");
    // }
    // else
    // {
    //     printf("That file was NOT deleted!");
    // }

    return 0;
}