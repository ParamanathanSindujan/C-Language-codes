#include <stdio.h>

int main() {
    int marks[10];
    int i, mark;

    printf("Enter the marks of 10 students (0 to 20):\n");

    for (i = 0; i < 10; i++) {
        printf("Enter mark for student %d: ", i+1);
        scanf("%d", &mark);

        if (mark >= 0 && mark <= 20) {
            marks[i] = mark;
        } else {
            printf("Invalid mark! Enter a mark between 0 and 20.\n");
            i--; // Decrement i to re-enter the mark for the current student
        }
    }

    printf("\nMarks of the students:\n");

    for (i = 0; i < 10; i++) {
        printf("Student %d: %d\n", i+1, marks[i]);
    }

    return 0;
}

