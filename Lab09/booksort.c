#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Structure to store student information
struct Student {
    char name[61];
    char surname[61];
    char gender;
    int age;
    char id[13];
    double gpa;
};

// Function to print student information
void printStudent(struct Student student) {
    if (toupper(student.gender) == 'M') {
        printf("Mr %c. %s, ID: %s, Age: %d, GPA: %.2lf\n", student.name[0], student.surname, student.id, student.age, student.gpa);
    } else if (toupper(student.gender) == 'F') {
        printf("Miss %c. %s, ID: %s, Age: %d, GPA: %.2lf\n", student.name[0], student.surname, student.id, student.age, student.gpa);
    }
}

// Function to compare students based on the chosen sorting option
int compareStudents(const void *a, const void *b, void *option) {
    struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    char *sortOption = (char *)option;
    int result = 0;

    if (strcasecmp(sortOption, "name") == 0) {
        result = strcasecmp(studentA->name, studentB->name);
    } else if (strcasecmp(sortOption, "surname") == 0) {
        result = strcasecmp(studentA->surname, studentB->surname);
    } else if (strcasecmp(sortOption, "id") == 0) {
        result = strcmp(studentA->id, studentB->id);
    }

    return result;
}

int main() {
    struct Student students[20];
    char sortOption[10];

    // Input student details for 20 students
    for (int i = 0; i < 20; i++) {
        scanf("%s %s %c %d %s %lf", students[i].name, students[i].surname, &students[i].gender, &students[i].age, students[i].id, &students[i].gpa);
    }

    // Input sorting option
    scanf("%s", sortOption);

    // Sort the students based on the chosen option
    qsort(students, 20, sizeof(struct Student), compareStudents, sortOption);

    // Display the sorted student information
    for (int i = 0; i < 20; i++) {
        printStudent(students[i]);
    }

    return 0;
}
