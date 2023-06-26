//bar chart
#include <stdio.h>

void drawBarChart(int values[], int size) {
    printf("Element Value Histogram\n");

    for (int i = 0; i < size; i++) {
        printf("%d %d ", i, values[i]);

        for (int j = 0; j < values[i]; j++) {
            printf("*");
        }

        printf("\n");
    }
}

int main() {
    int array[] = {19, 3, 15, 7, 11, 9, 13, 5, 17, 1};
    int size = sizeof(array) / sizeof(array[0]);

    drawBarChart(array, size);

    return 0;
}

