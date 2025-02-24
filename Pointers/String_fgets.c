#include <stdio.h>
#include <string.h>
int main(){

    char str[100];
    fgets(str, 100, stdin);// 1) на кой стринг 2) колко МАКС символа 3) от кой файл - stdin значи от конзолата
    printf("!%s!",str);
    char *newline = strchr(str, '\n');
    if (newline) {
        *newline = '\0';
    }
    printf("!%s!",str);
    return 0;
}