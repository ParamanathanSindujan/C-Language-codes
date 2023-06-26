//Prompt the user to enter series of numbers from the keyboard and display the
//numbers. If user enters a negative number stop reading the numbers.

#include <stdio.h>

int main() {
    int number;

    printf("Enter a series of numbers (enter a negative number to stop):\n");

    while (1) {
        scanf("%d", &number);

        if (number < 0) {
            break;
        }

        printf("%d\n", number);
    }

    return 0;
}

