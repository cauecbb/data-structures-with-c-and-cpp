#include <stdio.h>
#include <string.h>

typedef struct
{

    char name[12];
    float gpa;

} Student;

int main()
{

    Student student1 = {"Marks", 2.5};
    Student student2 = {"Fred", 1.3};
    Student student3 = {"Claire", 3.6};
    Student student4 = {"John", 2.9};

    Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }
}
