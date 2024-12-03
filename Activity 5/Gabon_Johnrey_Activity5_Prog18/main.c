#include <stdio.h>

#define STUDENTS 3 // number of students
#define EXAMS 4    // number of exams

// Function prototypes
int minimum(int grades[][EXAMS], int pupils, int tests);
int maximum(int grades[][EXAMS], int pupils, int tests);
double average(int setOfGrades[], int tests);
void printArray(int grades[][EXAMS], int pupils, int tests);

int main() {
    // Initialize student grades for three students (rows)
    int studentGrades[STUDENTS][EXAMS] = {
        {77, 68, 86, 73},
        {96, 87, 89, 78},
        {70, 90, 86, 81}};

    // Output array studentGrades
    printf("The array is:\n");
    printArray(studentGrades, STUDENTS, EXAMS);

    // Determine smallest and largest grade values
    printf("\n\nLowest grade: %d\n", minimum(studentGrades, STUDENTS, EXAMS));
    printf("Highest grade: %d\n", maximum(studentGrades, STUDENTS, EXAMS));

    // Compute and print average grade for each student
    for (int person = 0; person < STUDENTS; person++) {
        printf("The average grade for student %d is %.2f\n", person, average(studentGrades[person], EXAMS));
    }

    return 0; // indicates successful termination
}

// Find minimum grade
int minimum(int grades[][EXAMS], int pupils, int tests) {
    int lowGrade = 100; // Initialize to highest possible grade

    for (int i = 0; i < pupils; i++) {
        for (int j = 0; j < tests; j++) {
            if (grades[i][j] < lowGrade) {
                lowGrade = grades[i][j];
            }
        }
    }

    return lowGrade;
}
// Find maximum grade
int maximum(int grades[][EXAMS], int pupils, int tests) {
    int highGrade = 0; // Initialize to lowest possible grade
    for (int i = 0; i < pupils; i++) {
        for (int j = 0; j < tests; j++) {
            if (grades[i][j] > highGrade) {
                highGrade = grades[i][j];
            }
        }
    }
    return highGrade;
}
// Compute average of grades
double average(int setOfGrades[], int tests) {
    int total = 0;
    // Total all grades for one student
    for (int i = 0; i < tests; i++) {
        total += setOfGrades[i];
    }
    return (double)total / tests; // Average
}
// Print the array in a tabular format
void printArray(int grades[][EXAMS], int pupils, int tests) {
    printf("%16s%5s%5s%5s\n", "[0]", "[1]", "[2]", "[3]"); // Column headers
    for (int i = 0; i < pupils; i++) {
        printf("student[%d] ", i);
        for (int j = 0; j < tests; j++) {
            printf("%5d", grades[i][j]); // Print each grade
        }
        printf("\n");
    }
}
