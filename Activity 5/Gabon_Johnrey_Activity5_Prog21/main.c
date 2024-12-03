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
    strcpy(newStudent.courseGrade, " ");
    newStudent.testScore = 92;
    newStudent.programmingScore = 99;
    newStudent.GPA = 1.5;

    int score = (newStudent.testScore + newStudent.programmingScore) / 2;
    if (score >= 90){
	strcpy(newStudent.courseGrade, "A");
    }else if(score >= 80){
	strcpy(newStudent.courseGrade, "B");
    }else if (score >= 70){
	strcpy(newStudent.courseGrade, "C");
    }else if (score >= 60){
	strcpy(newStudent.courseGrade, "D");
    }else{
	strcpy(newStudent.courseGrade, "E");
    }
    printf("CourseGrade: %s", newStudent.courseGrade);
    return 0;
}
