#include <stdio.h>
#include <stdlib.h>
#include "Function.h"

void inputString(char str[])
{
    char ch;
    int i = 0;

    printf("Enter a Line: ");
    for (ch = getchar(), printf("Modified line: "); ch != '\n'; ch = getchar()) {
        str[i] = ch;

        if (ch == '*') {
            str[i + 1] = ' ';
            i = i + 2;
        }
        else {
            str[i + 1] = '\0';
            i = i + 1;
        }
    }
    str[i] = '\0';
}

void displayString(char str[])
{
    puts(str);
}


