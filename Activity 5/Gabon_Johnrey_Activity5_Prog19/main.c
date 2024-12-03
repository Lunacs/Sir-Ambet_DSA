#include <stdio.h>
#include <string.h>

struct studentType{
    char firstName[25];
    char lastName[25];
    char courseGrade[25];
    int testScore;
    int programmingScore;
    double GPA;
};

int main()
{
    struct studentType newStudent;
    strcpy(newStudent.firstName, "Johnrey");
    strcpy(newStudent.lastName, "Gabon");
    strcpy(newStudent.courseGrade, "BSIT");
    newStudent.testScore = 49;
    newStudent.programmingScore = 99;
    newStudent.GPA = 1.5;

    printf("%s\n", newStudent.firstName);
    printf("%s\n", newStudent.lastName);
    printf("%s\n", newStudent.courseGrade);
    printf("%d\n", newStudent.testScore);
    printf("%d\n", newStudent.programmingScore);
    printf("%.2lf", newStudent.GPA);
    return 0;
}
