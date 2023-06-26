#include <stdio.h>

void rotateArray(int arr[], int size) {
    int temp = arr[size - 1];  // Store the last element in a temporary variable

    for (int i = size - 1; i > 0; i--) {
        arr[i] = arr[i - 1];  // Move each element one position forward
    }

    arr[0] = temp;  // Assign the last element to the first position
}

int main() {
    int Motion[5];
    int i;

    printf("Enter 5 values to the array:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &Motion[i]);
    }

    printf("\nInitial values: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", Motion[i]);
    }

    rotateArray(Motion, 5);  // Rotate the array by one position

    printf("\nAfter rotating: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", Motion[i]);
    }

    printf("\n");

    return 0;
}

