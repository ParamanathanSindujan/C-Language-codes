//file handing in c
#include <stdio.h>

#define MAX_PATIENTS 5

typedef struct {
    char name[100];
    char appointmentType;
} Patient;

void writeDataToFile(Patient patients[], int count) {
    FILE *file = fopen("appointment.dat", "w");
    if (file == NULL) {
        printf("Unable to create the file.\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%s %c\n", patients[i].name, patients[i].appointmentType);
    }

    fclose(file);
}

void readDataFromFile() {
    FILE *file = fopen("appointment.dat", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return;
    }

    int consultingCount = 0, scanningCount = 0, testingCount = 0;
    char name[100], appointmentType;

    printf("Appointment Type   Number of Patients\n");

    while (fscanf(file, "%s %c", name, &appointmentType) != EOF) {
        switch (appointmentType) {
            case 'C':
                consultingCount++;
                break;
            case 'S':
                scanningCount++;
                break;
            case 'T':
                testingCount++;
                break;
            default:
                break;
        }
    }

    printf("Consulting         %d\n", consultingCount);
    printf("Scanning           %d\n", scanningCount);
    printf("Testing            %d\n", testingCount);

    fclose(file);
}

int main() {
    Patient patients[MAX_PATIENTS];

    printf("Enter the data of %d patients:\n", MAX_PATIENTS);
    for (int i = 0; i < MAX_PATIENTS; i++) {
        printf("Patient Name: ");
        scanf("%s", patients[i].name);

        printf("Appointment Type (C, S, T): ");
        scanf(" %c", &patients[i].appointmentType);
    }

    writeDataToFile(patients, MAX_PATIENTS);
    readDataFromFile();

    return 0;
}

