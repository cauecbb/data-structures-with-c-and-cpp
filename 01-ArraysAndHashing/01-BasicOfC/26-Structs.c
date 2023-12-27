#include <stdio.h>
#include <string.h>

struct Person
{

    char name[12];
    int age;
};

int main()
{

    struct Person person1;
    struct Person person2;

    strcpy(person1.name, "Caue");
    person1.age = 19;

    strcpy(person2.name, "John");
    person2.age = 25;

    printf("\n%s", person1.name);
    printf("\n%d", person1.age);
    printf("\n");
    printf("\n%s", person2.name);
    printf("\n%d", person2.age);

    return 0;
}