#include <stdio.h>

void controlLights(int *status) {
    *status = !(*status);
    printf("Lights turned %s.\n", *status ? "ON" : "OFF");
}

void controlFan(int *status) {
    *status = !(*status);
    printf("Fan turned %s.\n", *status ? "ON" : "OFF");
}

void controlAlarm(int *status) {
    *status = !(*status);
    printf("Security Alarm turned %s.\n", *status ? "ON" : "OFF");
}

int main() {
    int choice;
    int lightStatus = 0, fanStatus = 0, alarmStatus = 0;
    
    while (1) {
        printf("\nSmart Home Automation System\n");
        printf("1. Control Lights\n");
        printf("2. Control Fan\n");
        printf("3. Control Security Alarm\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                controlLights(&lightStatus);
                break;
            case 2:
                controlFan(&fanStatus);
                break;
            case 3:
                controlAlarm(&alarmStatus);
                break;
            case 4:
                printf("Exiting Smart Home Automation System.\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}
