CFLAGS = -Wall -Wextra -Werror
TARGET = ft_cat
SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)
HEADER = cat.h

%.o: %.c $(HEADER)
	gcc $(CFLAGS) -c $<

all: $(TARGET)

$(TARGET): $(OBJECTS)
	gcc $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
