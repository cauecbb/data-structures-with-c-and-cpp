#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[25];
    char password[12];
    int id;
} User;

// typedef gives to an existent datatype a "nickname"

int main()
{

    User user1 = {"Caue", "12345678", 1001};

    printf("Your name is %s.", user1.name);
    printf("Your id is %d.", user1.id);

    return 0;
}