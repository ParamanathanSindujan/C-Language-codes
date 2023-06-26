//loop2
/*Enter the gender and the age of a person from the keyboard and display
“SeniorMale” or “SeniorFemale”. Age greater than or equal to 65 is taken as
the condition to determine whether a person is a senior citizen. */

#include <stdio.h>

int main() {
    char gender;
    int age;
    
    printf("Enter gender (M/F): ");
    scanf(" %c", &gender);
    
    printf("Enter age: ");
    scanf("%d", &age);
    
    if (age >= 65) {
        if (gender == 'M') {
            printf("SeniorMale\n");
        } else if (gender == 'F') {
            printf("SeniorFemale\n");
        } else {
            printf("Invalid gender input.\n");
        }
    } else {
        printf("Not a senior citizen.\n");
    }
    
    return 0;
}

