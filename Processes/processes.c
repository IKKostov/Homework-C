#include "processes.h"
#include <stdio.h>
#include <string.h>

struct Process processes[MAX_PROCESSES];
int processcount = 0;
static int nextid = 1; // Вътрешна променлива за следващото ID

// Генерира следващо уникално ID
static int nextprocessid() {
    if (nextid <= 0) {
        return 0; // Диапазонът е изчерпан
    }
    return nextid++;
}

// Създаване на нов процес
int createnewprocess(const char *name) {
    if (processcount >= MAX_PROCESSES) {
        printf("\nГрешка: Максималният брой процеси е достигнат.\n");
        return 0;
    }

    int id = nextprocessid();
    if (id == 0) {
        printf("\nГрешка: Изчерпан диапазон от ID.\n");
        return 0;
    }

    strncpy(processes[processcount].name, name, 30);
    processes[processcount].name[30] = '\0'; // Гарантираме терминиране
    processes[processcount].id = id;
    processcount++;
    return id;
}

// Спиране на процес по ID
void stopprocess(int id) {
    int found = 0;
    for (int i = 0; i < processcount; i++) {
        if (processes[i].id == id) {
            found = 1;
            for (int j = i; j < processcount - 1; j++) {
                processes[j] = processes[j + 1];
            }
            processcount--;
            printf("\nПроцес с ID %d е спрян.\n", id);
            break;
        }
    }
    if (!found) {
        printf("\nГрешка: Процес с ID %d не е намерен.\n", id);
    }
}

// Принтиране на всички процеси
void listprocesses() {
    printf("\nСписък на процесите:\n");
    for (int i = 0; i < processcount; i++) {
        printf("ID: %d, Име: %s\n", processes[i].id, processes[i].name);
    }
    if (processcount == 0) {
        printf("\nНяма активни процеси.\n");
    }
}