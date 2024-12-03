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
    newStudent.testScore = 92;
    newStudent.programmingScore = 99;
    newStudent.GPA = 1.5;

    int score = (newStudent.testScore + newStudent.programmingScore) / 2;
    printf("Score: %d\n", score);
    return 0;
}
