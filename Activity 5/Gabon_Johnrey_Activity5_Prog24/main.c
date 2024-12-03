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
void printStudent(struct studentType Student1){
    printf("%s\n", Student1.firstName);
    printf("%s\n", Student1.lastName);
    printf("%s\n", Student1.courseGrade);
    printf("%d\n", Student1.testScore);
    printf("%d\n", Student1.programmingScore);
    printf("%.2lf", Student1.GPA);
}
int main()
{
    struct studentType newStudent;

    strcpy(newStudent.firstName, "Johnrey");
    strcpy(newStudent.lastName, "Gabon");
    strcpy(newStudent.courseGrade, "A");
    newStudent.testScore = 99;
    newStudent.programmingScore = 99;
    newStudent.GPA = 1.5;

    printStudent(newStudent);
}
