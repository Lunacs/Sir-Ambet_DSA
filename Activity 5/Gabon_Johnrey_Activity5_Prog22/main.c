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
    strcpy(newStudent.courseGrade, "A");
    newStudent.testScore = 89;
    newStudent.programmingScore = 99;
    newStudent.GPA = 1.5;
    //Create another student
    //then copy the values from newstudent to student
    struct studentType student;
    strcpy(student.firstName, newStudent.firstName);
    strcpy(student.lastName, newStudent.lastName);
    strcpy(student.courseGrade, newStudent.courseGrade);
    student.testScore = newStudent.testScore;
    student.programmingScore = newStudent.programmingScore;
    student.GPA = newStudent.GPA;

    printf("%s\n", student.firstName);
    printf("%s\n", student.lastName);
    printf("%s\n", student.courseGrade);
    printf("%d\n", student.testScore);
    printf("%d\n", student.programmingScore);
    printf("%.2lf", student.GPA);
    return 0;
}
