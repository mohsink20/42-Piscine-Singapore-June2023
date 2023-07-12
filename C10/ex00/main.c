#include <unistd.h>
#include <fcntl.h>

void displayString(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(int argc, char *argv[])
{
    char character;
    int bytesRead;
    int fileDescriptor;

    if (argc == 1)
        displayString("File name missing.\n");
    else if (argc > 2)
        displayString("Too many arguments.\n");
    else
    {
        fileDescriptor = open(argv[1], O_RDONLY);
        if (fileDescriptor == -1)
            displayString("Cannot read file.\n");
        else
        {
            bytesRead = read(fileDescriptor, &character, 1);
            while (bytesRead)
            {
                write(1, &character, 1);
                bytesRead = read(fileDescriptor, &character, 1);
            }
            close(fileDescriptor);
        }
    }
    return 0;
}
