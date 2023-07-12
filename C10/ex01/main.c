#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>
#include "cat.h"

#define BUF_SIZE 1

void print_string(char *str)
{
    while (*str)
        write(1, str++, 1);
}

void print_error_message(ProgramInfo *info, char *file)
{
    print_string(basename(info->program_name));
    print_string(": ");
    print_string(file);
    print_string(": ");
    print_string(strerror(errno));
    print_string("\n");
    errno = 0;
}

void display_file_contents(int fd, ProgramInfo *info, char *file)
{
    long size;
    unsigned char buf[BUF_SIZE];

    while ((size = read(fd, buf, BUF_SIZE)))
    {
        if (errno)
        {
            print_error_message(info, file);
            return;
        }
        write(1, buf, size);
    }
}

int main(int argc, char *argv[])
{
    ProgramInfo info;
    int fd;
    int i;

    info.program_name = argv[0];
    if (argc == 1)
        display_file_contents(0, &info, 0);
    else
    {
        i = 0;
        while (++i < argc)
        {
            if ((fd = open(argv[i], O_RDONLY)) == -1)
            {
                print_error_message(&info, argv[i]);
                continue;
            }
            display_file_contents(fd, &info, argv[i]);
            close(fd);
        }
    }
    return 0;
}
