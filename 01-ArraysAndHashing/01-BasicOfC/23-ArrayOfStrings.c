#include <stdio.h>
#include <string.h>

int main()
{

    char names[][10] = {"Caue", "John", "Mohd", "James"};

    strcpy(names[3], "Olive");

    for (int i = 0; i < sizeof(names) / sizeof(names[0]); i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}