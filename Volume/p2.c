#include <stdio.h>

// Define a union to store information about a student
union Marks {
    int rollNo;
    char name[50];
    int chemMarks;
    int mathsMarks;
    int phyMarks;
};

int main() {
    // Declare an array of Marks union to store information about 5 students
    union Marks students[5];

    // Input information for each student
    for (int i = 0; i < 5; ++i) {
        printf("\nEnter information for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Name: ");
        scanf("%s", students[i].name);  // Assuming names don't have spaces

        printf("Chemistry Marks (out of 100): ");
        scanf("%d", &students[i].chemMarks);

        printf("Mathematics Marks (out of 100): ");
        scanf("%d", &students[i].mathsMarks);

        printf("Physics Marks (out of 100): ");
        scanf("%d", &students[i].phyMarks);
    }

    // Display the percentage of each student
    printf("\nStudent-wise Percentage:\n");
    for (int i = 0; i < 5; ++i) {
        double percentage = (students[i].chemMarks + students[i].mathsMarks + students[i].phyMarks) / 3.0;
        printf("Student %d - Roll No: %d, Name: %s, Percentage: %.2lf%%\n", i + 1, students[i].rollNo, students[i].name, percentage);
    }

    return 0;
}