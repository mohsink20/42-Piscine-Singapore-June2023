#ifndef CAT_H
#define CAT_H

typedef struct {
    char *program_name;
} ProgramInfo;

void print_string(char *str);
void print_error_message(ProgramInfo *info, char *file);
void display_file_contents(int fd, ProgramInfo *info, char *file);

#endif
