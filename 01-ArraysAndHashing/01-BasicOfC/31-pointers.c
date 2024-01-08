#include <stdio.h>

void printAge(int *pAge)
{

    printf("You are %d years old\n", pAge); // dereference
}

int main()
{

    // pointer = a "variable-like" reference that holds a memory adress to another variable, array, etc.
    //           some tasks are perfomed more easliy with pointers
    //           * = indirection operator (value at adress)

    int age = 21;
    int *pAge = NULL; // good practice to assign NULL if you declaring a pointer.
    pAge = &age;

    printf("adress of age: %p\n", &age);
    printf("value of pAge: %p\n", pAge);

    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));

    printf("value of age: %d\n", age);
    printf("value at stored adress: %d\n", *pAge); // dereferencing

    printAge(pAge);

    return 0;
}