*This project has been created as part of the 42 curriculum by aymissao.*

# libft

## Description

**libft** is the first project of the 42 common core. Its goal is to rebuild a personal C library by reimplementing a selection of standard libc functions, then extending it with useful utilities that are not part of the C standard library.

The project focuses on understanding how fundamental string, memory, and character operations work at a low level, while practicing clean C coding under the 42 Norm (`-Wall -Wextra -Werror`). The resulting static library (`libft.a`) is intended to be reused throughout later 42 projects.

This repository contains:

- Recreations of common libc functions (`ft_strlen`, `ft_memcpy`, `ft_atoi`, …)
- Additional helpers for string manipulation (`ft_split`, `ft_strjoin`, `ft_itoa`, …)
- File-descriptor output helpers (`ft_putchar_fd`, `ft_putstr_fd`, …)
- A linked-list API (`ft_lstnew`, `ft_lstadd_front`, `ft_lstmap`, …)

## Library overview

`libft` is a static library (`libft.a`) whose public interface is declared in `libft.h`. Functions are grouped as follows.

### Character classification and conversion

| Function | Role |
| --- | --- |
| `ft_isalpha` | Checks whether a character is alphabetic |
| `ft_isdigit` | Checks whether a character is a digit |
| `ft_isalnum` | Checks whether a character is alphanumeric |
| `ft_isascii` | Checks whether a value is in the ASCII range |
| `ft_isprint` | Checks whether a character is printable |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |

### Strings

| Function | Role |
| --- | --- |
| `ft_strlen` | Returns the length of a null-terminated string |
| `ft_strchr` / `ft_strrchr` | Locates the first / last occurrence of a character |
| `ft_strncmp` | Compares up to `n` characters of two strings |
| `ft_strnstr` | Locates a substring within a limited length |
| `ft_strlcpy` / `ft_strlcat` | Size-bounded copy and concatenation (BSD-style) |
| `ft_strdup` | Allocates and returns a duplicate of a string |
| `ft_substr` | Allocates a substring from a given start and length |
| `ft_strjoin` | Allocates the concatenation of two strings |
| `ft_strtrim` | Allocates a copy of a string with characters from a set trimmed at both ends |
| `ft_split` | Splits a string into an array of strings using a delimiter |
| `ft_strmapi` | Applies a function to each character and returns a new string |
| `ft_striteri` | Applies a function to each character in place |

### Memory

| Function | Role |
| --- | --- |
| `ft_memset` | Fills a memory area with a constant byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies `n` bytes (areas must not overlap) |
| `ft_memmove` | Copies `n` bytes safely even if areas overlap |
| `ft_memchr` | Locates a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_calloc` | Allocates zero-initialized memory |

### Conversion and I/O

| Function | Role |
| --- | --- |
| `ft_atoi` | Converts a string to an `int` |
| `ft_itoa` | Converts an `int` to an allocated string |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline |
| `ft_putnbr_fd` | Writes an integer as characters |

### Linked lists (`t_list`)

| Function | Role |
| --- | --- |
| `ft_lstnew` | Allocates a new list node |
| `ft_lstadd_front` / `ft_lstadd_back` | Inserts a node at the front / back |
| `ft_lstsize` | Returns the number of nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstdelone` | Deletes one node’s content and frees the node |
| `ft_lstclear` | Deletes and frees an entire list |
| `ft_lstiter` | Iterates over the list applying a function |
| `ft_lstmap` | Creates a new list by applying a function to each node |

## Instructions

### Requirements

- A C compiler (`cc` / `gcc` / `clang`)
- `make`

### Compilation

From the repository root:

```bash
make
```

This builds the static library `libft.a` with the flags `-Wall -Wextra -Werror`.

Other useful targets:

| Command | Effect |
| --- | --- |
| `make all` | Build `libft.a` (default) |
| `make clean` | Remove object files (`.o`) |
| `make fclean` | Remove object files and `libft.a` |
| `make re` | Rebuild from scratch (`fclean` then `all`) |

### Using the library in a program

1. Include the header:

```c
#include "libft.h"
```

2. Compile and link against `libft.a`:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Or explicitly:

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

## Resources

### Documentation and references

- [ISO C / libc man pages](https://man7.org/linux/man-pages/) — behavior of functions such as `strlen`, `memcpy`, `strlcpy`, `calloc`, etc.
- [OpenBSD `strlcpy` / `strlcat` man pages](https://man.openbsd.org/strlcpy.3) — size-bounded string copy/concatenation semantics
- [42 Libft subject](https://cdn.intra.42.fr/pdf/pdf/96080/en.subject.pdf) — official project specification (available on the 42 intranet)
- [The C Programming Language (K&R)](https://en.wikipedia.org/wiki/The_C_Programming_Language) — classic reference for C fundamentals
- [42 Norm documentation](https://github.com/42School/norminette) — coding style expected at 42

### How AI was used

AI assistance (Cursor) was used for:

- Drafting and structuring this `README.md` according to the curriculum README requirements
- Clarifying expected behavior of libc-compatible functions when comparing against man pages
- Helping organize the description of the library’s API and build instructions

Implementation of the C sources, the Makefile, and debugging remain the author’s work; AI was not used as a substitute for writing or understanding the required functions.
