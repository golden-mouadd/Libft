*This project has been created as part of the 42 curriculum by mouabous*

# Libft

## Description

Libft is a project from the 42 School curriculum. The goal is to create a personal C library containing reimplementations of standard C library functions, as well as additional utility functions.

This project helps develop a better understanding of C programming, memory management, pointers, strings, and linked lists.

The library is named `libft.a` and can be reused in future C projects.

## Instructions

### Compilation

To compile the library, run the following command at the root of the repository:

```bash
make
```

This generates the static library `libft.a`.

Other available commands:

```bash
make clean
make fclean
make re
```

- `make clean`: Removes object files.
- `make fclean`: Removes object files and the compiled library.
- `make re`: Recompiles the library from scratch.

### Usage

To use Libft in a C project, include the header file and link the library during compilation.

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, Libft!\n", 1);
    return (0);
}
```

Compile your program with:

```bash
cc main.c -I. -L. -lft -o test
```

Run it with:

```bash
./test
```

Make sure that the functions used in your program are implemented in the library.

## Library Description

Libft contains custom implementations of standard C library functions and additional utility functions.

### 1. Libc Functions

These functions reproduce the behavior of common functions from the C standard library.

Examples include:

- `ft_isalpha`: Checks whether a character is an alphabetic letter.
- `ft_isdigit`: Checks whether a character is a digit.
- `ft_isalnum`: Checks whether a character is alphanumeric.
- `ft_isascii`: Checks whether a character belongs to the ASCII character set.
- `ft_isprint`: Checks whether a character is printable.
- `ft_strlen`: Calculates the length of a string.
- `ft_memset`: Fills a memory area with a specified byte.
- `ft_bzero`: Sets a memory area to zero.
- `ft_memcpy`: Copies memory from one location to another.
- `ft_memmove`: Copies memory safely when the source and destination overlap.
- `ft_strlcpy`: Copies a string into a destination buffer with a size limit.
- `ft_strlcat`: Concatenates strings with a size limit.
- `ft_toupper` and `ft_tolower`: Convert characters to uppercase or lowercase.
- `ft_strchr` and `ft_strrchr`: Find a character in a string.
- `ft_strncmp`: Compares two strings up to a specified number of characters.
- `ft_memchr` and `ft_memcmp`: Search and compare memory areas.
- `ft_strnstr`: Searches for a substring within a string.
- `ft_atoi`: Converts a string to an integer.
- `ft_calloc`: Allocates memory and initializes it to zero.
- `ft_strdup`: Duplicates a string using dynamic memory allocation.

### 2. Additional Functions

These functions provide useful operations that are not directly available as standard C library functions.

- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Joins two strings into a new string.
- `ft_strtrim`: Removes specified characters from the beginning and end of a string.
- `ft_split`: Splits a string using a delimiter.
- `ft_itoa`: Converts an integer into a string.
- `ft_strmapi`: Applies a function to each character of a string.
- `ft_striteri`: Applies a function to each character using its index.
- `ft_putchar_fd`: Writes a character to a file descriptor.
- `ft_putstr_fd`: Writes a string to a file descriptor.
- `ft_putendl_fd`: Writes a string followed by a newline.
- `ft_putnbr_fd`: Writes an integer to a file descriptor.

### 3. Linked List Functions

The linked list functions operate on the `t_list` structure defined in `libft.h`.

- `ft_lstnew`: Creates a new list element.
- `ft_lstadd_front`: Adds an element at the beginning of a list.
- `ft_lstsize`: Counts the elements in a list.
- `ft_lstlast`: Returns the last element of a list.
- `ft_lstadd_back`: Adds an element at the end of a list.
- `ft_lstdelone`: Deletes one element using a specified deletion function.
- `ft_lstclear`: Deletes and frees an entire list.
- `ft_lstiter`: Applies a function to every element.
- `ft_lstmap`: Creates a new list by applying a function to each element.

The exact functions included depend on the parts of the project that have been implemented.

## Resources

### Documentation and References

- [42 School](https://42.fr/) — Information about the 42 curriculum.
- [C Standard Library Reference](https://en.cppreference.com/w/c/header) — Documentation about standard C library functions.
- [GNU C Library Manual](https://www.gnu.org/software/libc/manual/) — Reference for C library functions and concepts.
- [Linux man-pages](https://man7.org/linux/man-pages/) — Documentation for system calls and library functions.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/) — Documentation about Makefiles and compilation.

### AI Usage

AI tools were used as supplementary learning resources during the development of this project. They helped explain C programming concepts, clarify the behavior of standard library functions, identify potential errors, and improve understanding of memory management, pointers, strings, and linked lists.

AI assistance was also used to help understand compilation instructions, debug code, and organize the documentation in this README.

All code submitted for evaluation should be reviewed, understood, and tested by the author in accordance with the 42 School rules and project requirements.
