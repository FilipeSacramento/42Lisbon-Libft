*This project has been created as part of the 42 curriculum by filigome.*

# Libft

## Description

The libft project is the first project in the 42 curriculum and aims to create our own library by manually replicating some of the most important functions that we use on a daily basis.

This project is useful not only because it allows us to build our own library of functions that we can use whenever need, but also because it helps us prepare and improve our skills by manually recreating each function we want to use.

## Instructions

### Compiler

In order to compile the project, you must have a C compiler installed, such as `gcc` or `clang`.

### Compilation

To compile all the files into a library archive, run the following command from the project directory:

```bash
make
```

This generates the static library `libft.a`.

Makefile rules available:

```bash
make all
make clean
make fclean
make re
```

- `make all`: compiles the library.
- `make clean`: removes object files.
- `make fclean`: removes object files and the library.
- `make re`: rebuilds the library.

### Using the library

1. Include the header at the top of your C source file:

```c
#include "libft.h"
```

2. Compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

3. Run the executable:

```bash
./program
```

## Resources

- Libft subject and materials provided by the 42 curriculum.
- Help and guidance from my fellow students at 42.
- Testing partially carried out using [Francinette](https://github.com/xicodomingues/francinette) during the project making.
- Some research was done using AI.

## Library Description

### Part 1 — Libc functions

Reimplementations of standard C functions.

**Character classification**

- `ft_isalpha`: checks whether a character is alphabetic.
- `ft_isdigit`: checks whether a character is a decimal digit.
- `ft_isalnum`: checks whether a character is alphanumeric.
- `ft_isascii`: checks whether a value belongs to the ASCII range.
- `ft_isprint`: checks whether a character is printable.

**Memory manipulation**

- `ft_memset`: fills a memory area with a specified byte.
- `ft_bzero`: sets a memory area to zero.
- `ft_memcpy`: copies bytes between non-overlapping memory areas.
- `ft_memmove`: copies bytes while supporting overlapping memory areas.
- `ft_memchr`: searches for a byte in a memory area.
- `ft_memcmp`: compares two memory areas.

**String manipulation**

- `ft_strlen`: calculates the length of a string.
- `ft_strlcpy`: copies a string with a specified destination size.
- `ft_strlcat`: appends a string with a specified destination size.
- `ft_strchr`: finds the first occurrence of a character.
- `ft_strrchr`: finds the last occurrence of a character.
- `ft_strncmp`: compares strings up to a specified number of characters.
- `ft_strnstr`: searches for a substring within a limited length.

**Character conversion**

- `ft_toupper`: converts a lowercase letter to uppercase.
- `ft_tolower`: converts an uppercase letter to lowercase.

**Conversion and allocation**

- `ft_atoi`: converts a string to an integer.
- `ft_calloc`: allocates zero-initialized memory.
- `ft_strdup`: creates a dynamically allocated copy of a string.

### Part 2 — Additional functions

Functions for string manipulation, conversion, and file-descriptor output.

- `ft_substr`: extracts a substring.
- `ft_strjoin`: concatenates two strings into a new allocation.
- `ft_strtrim`: removes specified characters from the beginning and end of a string.
- `ft_split`: splits a string using a delimiter.
- `ft_itoa`: converts an integer into a string.
- `ft_strmapi`: creates a new string by applying a function to each character.
- `ft_striteri`: applies a function to each character of a string.
- `ft_putchar_fd`: writes a character to a file descriptor.
- `ft_putstr_fd`: writes a string to a file descriptor.
- `ft_putendl_fd`: writes a string followed by a newline.
- `ft_putnbr_fd`: writes an integer to a file descriptor.

### Part 3 — Linked lists

Functions for creating, traversing, modifying, and deleting linked lists using the `t_list` structure defined in `libft.h`.

- `ft_lstnew`: creates a new node.
- `ft_lstadd_front`: adds a node at the beginning of a list.
- `ft_lstsize`: counts the nodes in a list.
- `ft_lstlast`: returns the last node.
- `ft_lstadd_back`: adds a node at the end of a list.
- `ft_lstdelone`: deletes a node using a supplied deletion function.
- `ft_lstclear`: deletes a list and releases its nodes.
- `ft_lstiter`: applies a function to each node's content.
- `ft_lstmap`: creates a new list by applying a function to each node's content.