#include <stdio.h>
#include <string.h>
#define NUM_STUDENTS 10
struct std {
    char stdFName[50];
    char stdLName[50];
    int testScore;
    char grade;
};
// Function to calculate grade based on test score
char calculateGrade(int score) {
    if (score >= 90) return 'A';
    else if (score >= 80) return 'B';
    else if (score >= 70) return 'C';
    else if (score >= 60) return 'D';
    else return 'F';
}
int main() {
    struct std students[NUM_STUDENTS];
    int i, highestScore = -1;
    char topStudentFName[50], topStudentLName[50];
    // Reading students' data
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter first name of student %d: ", i + 1);
        scanf("%s", students[i].stdFName);
        printf("Enter last name of student %d: ", i + 1);
        scanf("%s", students[i].stdLName);
        printf("Enter test score of student %d (0-100): ", i + 1);
        scanf("%d", &students[i].testScore);
        printf("\n");
        // Validate test score input
        while (students[i].testScore < 0 || students[i].testScore > 100) {
            printf("Invalid score! Enter test score of student %d (0-100): ", i + 1);
            scanf("%d", &students[i].testScore);
        }
        // Assign grade based on test score
        students[i].grade = calculateGrade(students[i].testScore);
        // Check for highest score
        if (students[i].testScore > highestScore) {
            highestScore = students[i].testScore;
            strcpy(topStudentFName, students[i].stdFName);
            strcpy(topStudentLName, students[i].stdLName);
        }
    }
    // Output students' data
    printf("\nStudent Grades:\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%s, %s: Test Score = %d, Grade = %c\n",
               students[i].stdLName, students[i].stdFName,
               students[i].testScore, students[i].grade);
    }
    // Output highest score details
    printf("\nHighest Test Score:\n");
    printf("Name: %s, %s\n", topStudentLName, topStudentFName);
    printf("Score: %d\n", highestScore);
    return 0;
}
