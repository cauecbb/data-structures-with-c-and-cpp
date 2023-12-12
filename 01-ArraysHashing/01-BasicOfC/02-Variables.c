#include <stdio.h>

int main(){
    int x = 3; // declaration + initialization

    int age = 21;        //integer
    float gpa = 2.10;    //floating point number
    char grade = 'C';    //single character
    char name[] = "Bro"; //array of characters

    printf("Hello %s!\n", name);
    printf("You are %d years old.", age);
    printf("Your avarage grade is %c.\n", grade);
    printf("Your gpa is %f.\n", gpa);

    return 0;
}
