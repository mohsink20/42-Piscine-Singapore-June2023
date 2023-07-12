// tail.h

#ifndef TAIL_H
#define TAIL_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>

typedef struct
{
    char *programName;
    char *buffer;
    int bufferSize;
    int fileDescriptor;
} TailProgram;

extern TailProgram g_tailProgram;

void printString(char *str);
void printErrorMsg(char *file);
int convertToInt(char *str);
void printNewLine();
void printPrefix(char *file);

#endif
