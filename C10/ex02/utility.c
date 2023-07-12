// utility.c

#include "tail.h"

void printString(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void printErrorMsg(char *file)
{
    printString(basename(g_tailProgram.programName));
    printString(": ");
    printString(file);
    printString(": ");
    printString(strerror(errno));
    printString("\n");
}

int convertToInt(char *str)
{
    int num = 0;
    while (*str)
    {
        num *= 10;
        num += (*(str++) - '0');
    }
    return num;
}

void printNewLine()
{
    printString("\n");
}

void printPrefix(char *file)
{
    printString("==> ");
    printString(file);
    printString(" <==\n");
}
