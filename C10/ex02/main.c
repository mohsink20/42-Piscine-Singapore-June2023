// main.c

#include "tail.h"

TailProgram g_tailProgram;

void displayFile(int fd)
{
    long long idx;
    int tmp;

    if (g_tailProgram.bufferSize == 0)
    {
        while (read(fd, g_tailProgram.buffer, 1))
        {
            if (errno)
                return;
        }
    }
    else
    {
        idx = 0;
        while (read(fd, &g_tailProgram.buffer[(idx % g_tailProgram.bufferSize)], 1))
        {
            if (errno)
                return;
            ++idx;
        }
        tmp = idx % g_tailProgram.bufferSize;
        if (idx >= g_tailProgram.bufferSize)
            write(1, g_tailProgram.buffer + tmp, g_tailProgram.bufferSize - tmp);
        write(1, g_tailProgram.buffer, tmp);
    }
}

void display(int argc, char *argv[])
{
    int i;
    int k;

    i = 2;
    k = 0;
    while (++i < argc)
    {
        errno = 0;
        if ((g_tailProgram.fileDescriptor = open(argv[i], O_RDONLY)) == -1)
        {
            printErrorMsg(argv[i]);
            continue;
        }
        if (argc > 4)
        {
            if (k)
                printNewLine();
            printPrefix(argv[i]);
        }
        k = 1;
        displayFile(g_tailProgram.fileDescriptor);
        close(g_tailProgram.fileDescriptor);
    }
}

int main(int argc, char *argv[])
{
    g_tailProgram.programName = argv[0];
    g_tailProgram.bufferSize = convertToInt(argv[2]);
    g_tailProgram.buffer = (char *)malloc(g_tailProgram.bufferSize);
    if (argc == 3)
        displayFile(0);
    else
        display(argc, argv);
    free(g_tailProgram.buffer);
    return 0;
}
