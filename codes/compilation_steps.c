#include <stdio.h>
#include <string.h>
struct student
{
    int roll_no;
    char name[10];
    int marks;
};

int main()
{
    struct student harshad;
    harshad.roll_no = 1708002;
    strcpy(harshad.name, "Harshad");
    harshad.marks = 100;

    printf("Name = %s\n", harshad.name);
    printf("RRoll no =%d\n", harshad.roll_no);
    printf("Marks = %d\n", harshad.marks);

    return 0;
}