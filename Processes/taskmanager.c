#include "processes.h"
#include <stdio.h>
#include <stdlib.h>

void printmenu() {
    printf("\nTask Manager:\n");
    printf("1. Създаване на процес\n");
    printf("2. Извеждане на списък със всички процеси\n");
    printf("3. Спиране на процес\n");
    printf("4. Изход\n");
    printf("Изберете опция: ");
}

int main() {
    int choice;
    char name[31];
    int id;

    while (1) {
        printmenu();
        scanf("%d", &choice);
        getchar(); // Премахва новия ред от буфера

        switch (choice) {
            case 1:
                printf("\nВъведете име на процеса: ");
                fgets(name, sizeof(name), stdin);
                name[strcspn(name, "\n")] = '\0'; // Премахваме новия ред
                if (createnewprocess(name)) {
                    printf("\nПроцес \"%s\" е създаден успешно.\n", name);
                }
                break;

            case 2:
                listprocesses();
                break;

            case 3:
                printf("\nВъведете ID на процеса за спиране: ");
                scanf("%d", &id);
                stopprocess(id);
                break;

            case 4:
                printf("\nИзход от програмата.\n");
                exit(0);

            default:
                printf("\nНевалидна опция. Моля, опитайте отново.\n");
                break;
        }
    }
    return 0;
}
