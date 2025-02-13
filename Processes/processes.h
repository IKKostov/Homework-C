#ifndef PROCESSES_H
#define PROCESSES_H
#define MAX_PROCESSES 5
struct Process {
    int id;             // Уникален номер на процеса
    char name[30];      // Име на процеса
};
extern struct Process processes[MAX_PROCESSES]; // Масив за процесите
extern int processcount;                        // Брой процеси сега
int createnewprocess(const char *name);         // Функция за създаване на процес
void stopprocess(int id);                       // Функция за спиране на процес
void listprocesses(void);                       // Функция за принтиране на всички процеси
#endif