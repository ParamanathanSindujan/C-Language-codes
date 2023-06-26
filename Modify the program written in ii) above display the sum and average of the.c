/* Modify the program written in ii) above display the sum and average of the
positive numbers entered.*/


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


