//Write a C program to input an integer from the keyboard and convert the number into a positive
/*number, if the user input is a negative value.
Hint : if x is negative , -x is positive;
Eg: if user enters 5, display 5
 if user enters -2, display 2*/
 
 #include <stdio.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    printf("Converted number: %d\n", number);

    return 0;
}

