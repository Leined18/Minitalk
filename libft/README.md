# Funciones de la librería Libft

Esta librería contiene varias funciones útiles para manipulación de memoria, cadenas, listas, impresión y más. Aquí se detallan las funciones agrupadas por categorías:

| Funciones                        | Funciones                        |
| -------------------------------- | -------------------------------- |
| Funciones de Caracteres (is) | Funciones de Memoria (mem) |
| [ft_isalpha](https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isalpha.c) | [ft_bzero](https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_bzero.c) |
| [ft_isalnum](https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isalnum.c) | [ft_calloc](https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_calloc.c) |
| [ft_isascii](https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isascii.c) | [ft_memchr](https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memchr.c) |
| [ft_isdigit](https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isdigit.c) | [ft_memcmp](https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memcmp.c) |
| [ft_isprint](https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isprint.c) | [ft_memcpy](https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memcpy.c) |
|                                  | [ft_memmove](https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memmove.c) |
|                                  | [ft_memset](https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memset.c) |
|                                  | [ft_memrev](https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memrev.c) |
|                                  | [ft_memccpy](https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memccpy.c) |
|                                  | [ft_memdel](https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memdel.c) |
| Funciones de Salida (put)   | Funciones de Conversión (to) |
| [ft_putchar_fd](https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putchar_fd.c) | [ft_atoi](https://github.com/Leined18/Libft/blob/main/srcs/to/ft_atoi.c) |
| [ft_putendl_fd](https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putendl_fd.c) | [ft_itoa](https://github.com/Leined18/Libft/blob/main/srcs/to/ft_itoa.c) |
| [ft_putnbr_fd](https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putnbr_fd.c) | [ft_tolower](https://github.com/Leined18/Libft/blob/main/srcs/to/ft_tolower.c) |
| [ft_putstr_fd](https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putstr_fd.c) | [ft_toupper](https://github.com/Leined18/Libft/blob/main/srcs/to/ft_toupper.c) |
| [ft_error](https://github.com/Leined18/Libft/blob/main/srcs/put/ft_error.c)         | [ft_bintoa](https://github.com/Leined18/Libft/blob/main/srcs/to/ft_bintoa.c) |
| [ft_successful](https://github.com/Leined18/Libft/blob/main/srcs/put/ft_successful.c) | [ft_atobin](https://github.com/Leined18/Libft/blob/main/srcs/to/ft_atobin.c) |
|                                  | [ft_bintostr](https://github.com/Leined18/Libft/blob/main/srcs/to/ft_bintostr.c) |
|                                  | [ft_strtobin](https://github.com/Leined18/Libft/blob/main/srcs/to/ft_strtobin.c) |
| Funciones de Cadenas (str)  | Funciones de Listas (lst)   |
| [ft_split](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_split.c)        | [ft_lstnew_bonus](https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstnew_bonus.c) |
| [ft_strchr](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strchr.c)      | [ft_lstadd_front_bonus](https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstadd_front_bonus.c) |
| [ft_strdup](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strdup.c)      | [ft_lstsize_bonus](https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstsize_bonus.c) |
| [ft_striteri](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_striteri.c)  | [ft_lstlast_bonus](https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstlast_bonus.c) |
| [ft_strjoin](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strjoin.c)    | [ft_lstadd_back_bonus](https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstadd_back_bonus.c) |
| [ft_strlcat](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strlcat.c)    | [ft_lstdelone_bonus](https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstdelone_bonus.c) |
| [ft_strlcpy](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strlcpy.c)    | [ft_lstclear_bonus](https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstclear_bonus.c) |
| [ft_strlen](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strlen.c)      | [ft_lstiter_bonus](https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstiter_bonus.c) |
| [ft_strmapi](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strmapi.c)    | [ft_lstmap_bonus](https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstmap_bonus.c) |
| [ft_strncmp](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strncmp.c)    |                                  |
| [ft_strnstr](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strnstr.c)    |                                  |
| [ft_strrchr](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strrchr.c)    |                                  |
| [ft_strtrim](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strtrim.c)    |                                  |
| [ft_strrev](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strrev.c)      |                                  |
| [ft_substr](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_substr.c)      |                                  |
| [ft_strrncmp](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strrncmp.c)  |                                  |
| [ft_strtok](https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strtok.c)      |                                  |
| Funciones de Impresión (printf) / Get_next_line | |
|   [ft_printf](https://github.com/Leined18/Libft/blob/main/srcs/printf/ft_printf.c)   | |
|   [ft_putbase_fd](https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putbase_fd.c) ||
|   [ft_putaddr](https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putaddr.c) | |               
|   [ft_putchar](https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putchar.c) | |                    
|   [ft_puthexa](https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_puthexa.c) | |                  
|   [ft_putnbr](https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putnbr.c) | |                
|   [ft_putstr](https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putstr.c) | |
|   [ft_putunsigned](https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putunsigned.c) | |
|   [ge_next_line](https://github.com/Leined18/Libft/blob/main/srcs/get/get_next_line.c) | |
