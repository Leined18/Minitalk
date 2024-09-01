# Funciones de la librería Libft

Esta librería contiene varias funciones útiles para la manipulación de memoria, cadenas, listas, impresión y más. Aquí se detallan las funciones agrupadas por categorías:

| Funciones de Caracteres (is) | Descripción                                    |
| ---------------------------- | ---------------------------------------------- |
| [ft_isalpha]                 | Comprueba si el carácter es alfabético         |
| [ft_isalnum]                 | Comprueba si el carácter es alfanumérico       |
| [ft_isascii]                 | Comprueba si el carácter pertenece a ASCII     |
| [ft_isdigit]                 | Comprueba si el carácter es un dígito          |
| [ft_isprint]                 | Comprueba si el carácter es imprimible         |
| [ft_isspace]                 | Comprueba si el carácter es un espacio         |
| [ft_isndup]                  | Comprueba si un array de numeros tiene numeros duplicados|

| Funciones de Memoria (mem)   | Descripción                                    |
| ---------------------------- | ---------------------------------------------- |
| [ft_bzero]                   | Establece a cero un bloque de memoria          |
| [ft_calloc]                  | Asigna memoria y la inicializa a cero          |
| [ft_memchr]                  | Busca un carácter en un bloque de memoria      |
| [ft_memcmp]                  | Compara bloques de memoria                     |
| [ft_memcpy]                  | Copia un bloque de memoria                     |
| [ft_memmove]                 | Mueve un bloque de memoria                     |
| [ft_memset]                  | Establece un valor en un bloque de memoria     |
| [ft_memrev]                  | Invierte un bloque de memoria                  |
| [ft_memccpy]                 | Copia hasta un carácter específico             |
| [ft_memdel]                  | Libera un bloque de memoria                    |

| Funciones de Conversión (to) | Descripción                                    |
| ---------------------------- | ---------------------------------------------- |
| [ft_atoi]                    | Convierte una cadena a entero                  |
| [ft_atobin]                  | Convierte una cadena a binario                 |
| [ft_atol]                    | Convierte una cadena a long                    |
| [ft_atoll]                   | Convierte una cadena a long long               |
| [ft_itoa]                    | Convierte un entero a cadena                   |
| [ft_tolower]                 | Convierte un carácter a minúscula              |
| [ft_toupper]                 | Convierte un carácter a mayúscula              |
| [ft_bintoa]                  | Convierte un binario a cadena                  |
| [ft_bintostr]                | Convierte un binario a cadena legible          |
| [ft_strtobin]                | Convierte una cadena a binario                 |

| Funciones de Cadenas (str)   | Descripción                                    |
| ---------------------------- | ---------------------------------------------- |
| [ft_split]                   | Divide una cadena en un array de strings       |
| [ft_strchr]                  | Busca un carácter en una cadena                |
| [ft_strdup]                  | Duplica una cadena                             |
| [ft_striteri]                | Itera sobre una cadena con índice              |
| [ft_strjoin]                 | Une dos cadenas en una sola                    |
| [ft_strlcat]                 | Concatenación segura de cadenas                |
| [ft_strlcpy]                 | Copia segura de cadenas                        |
| [ft_strlen]                  | Calcula la longitud de una cadena              |
| [ft_strmapi]                 | Itera sobre una cadena y aplica una función    |
| [ft_strncmp]                 | Compara dos cadenas                            |
| [ft_strnstr]                 | Busca una cadena en otra cadena                |
| [ft_strrchr]                 | Busca un carácter en una cadena desde el final |
| [ft_strtrim]                 | Elimina espacios en blanco de una cadena       |
| [ft_strrev]                  | Invierte una cadena                            |
| [ft_substr]                  | Extrae una subcadena                           |
| [ft_strrncmp]                | Compara un número limitado de caracteres       |
| [ft_strtok]                  | Divide una cadena en tokens                    |

| Funciones de Listas (lst)    | Descripción                                    |
| ---------------------------- | ---------------------------------------------- |
| [ft_lstnew_bonus]            | Crea un nuevo nodo de lista                    |
| [ft_lstadd_front_bonus]      | Añade un nodo al inicio de la lista            |
| [ft_lstsize_bonus]           | Calcula el tamaño de una lista                 |
| [ft_lstlast_bonus]           | Obtiene el último nodo de la lista             |
| [ft_lstadd_back_bonus]       | Añade un nodo al final de la lista             |
| [ft_lstdelone_bonus]         | Elimina un nodo de la lista                    |
| [ft_lstclear_bonus]          | Elimina todos los nodos de la lista            |
| [ft_lstiter_bonus]           | Itera sobre una lista                          |
| [ft_lstmap_bonus]            | Aplica una función a cada elemento de la lista |

| Funciones de Salida (put)    | Descripción                                    |
| ---------------------------- | ---------------------------------------------- |
| [ft_putchar_fd]              | Escribe un carácter en un descriptor de archivo|
| [ft_putendl_fd]              | Escribe una línea en un descriptor de archivo  |
| [ft_putnbr_fd]               | Escribe un número en un descriptor de archivo  |
| [ft_putstr_fd]               | Escribe una cadena en un descriptor de archivo |
| [ft_error]                   | Muestra un mensaje de error                    |
| [ft_successful]              | Muestra un mensaje de éxito                    |

| Funciones de Impresión (printf) / Get_next_line | Descripción                      |
| ----------------------------------------------- | -------------------------------- |
| [ft_printf]                                     | Imprime un mensaje con formato   |
| [ft_putbase_fd]                                 | Imprime un número en una base específica |
| [ft_putaddr]                                    | Imprime una dirección de memoria |
| [ft_putchar]                                    | Imprime un carácter              |
| [ft_puthexa]                                    | Imprime un número en hexadecimal |
| [ft_putnbr]                                     | Imprime un número                |
| [ft_putstr]                                     | Imprime una cadena               |
| [ft_putunsigned]                                | Imprime un número sin signo      |
| [get_next_line]                                 | Lee una línea de un descriptor de archivo |

| Funciones de Matemáticas (math) | Descripción                                   |
| -------------------------------- | --------------------------------------------- |
| [ft_abs]                         | Calcula el valor absoluto de un número        |
| [ft_index]                       | Encuentra la posición de un valor en un array |
| [ft_insort]                      | Ordena un array utilizando insertion sort     |
| [ft_sqrt]                        | Calcula la raíz cuadrada de un número         |
| [ft_fact]                        | Calcula el factorial de un número             |
| [ft_fib]                         | Calcula el enésimo número en la secuencia de Fibonacci. |


[ft_fact]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_fact.c
[ft_fib]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_fib.c
[ft_abs]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_abs.c
[ft_index]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_index.c
[ft_insort]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_insort.c
[ft_sqrt]: https://github.com/Leined18/Libft/blob/main/srcs/math/ft_sqrt.c

[ft_isalpha]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isalpha.c
[ft_isalnum]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isalnum.c
[ft_isascii]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isascii.c
[ft_isdigit]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isdigit.c
[ft_isprint]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isprint.c
[ft_isspace]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isspace.c
[ft_isndup]: https://github.com/Leined18/Libft/blob/main/srcs/is/ft_isndup.c

[ft_bzero]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_bzero.c
[ft_calloc]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_calloc.c
[ft_memchr]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memchr.c
[ft_memcmp]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memcmp.c
[ft_memcpy]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memcpy.c
[ft_memmove]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memmove.c
[ft_memset]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memset.c
[ft_memrev]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memrev.c
[ft_memccpy]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memccpy.c
[ft_memdel]: https://github.com/Leined18/Libft/blob/main/srcs/mem/ft_memdel.c

[ft_putchar_fd]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putchar_fd.c
[ft_putendl_fd]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putendl_fd.c
[ft_putnbr_fd]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putnbr_fd.c
[ft_putstr_fd]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_putstr_fd.c
[ft_error]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_error.c
[ft_successful]: https://github.com/Leined18/Libft/blob/main/srcs/put/ft_successful.c

[ft_atoi]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_atoi.c
[ft_atobin]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_atobin.c
[ft_atol]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_atol.c
[ft_atoll]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_atoll.c
[ft_itoa]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_itoa.c
[ft_tolower]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_tolower.c
[ft_toupper]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_toupper.c
[ft_bintoa]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_bintoa.c
[ft_bintostr]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_bintostr.c
[ft_strtobin]: https://github.com/Leined18/Libft/blob/main/srcs/to/ft_strtobin.c

[ft_split]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_split.c
[ft_strchr]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strchr.c
[ft_strdup]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strdup.c
[ft_striteri]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_striteri.c
[ft_strjoin]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strjoin.c
[ft_strlcat]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strlcat.c
[ft_strlcpy]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strlcpy.c
[ft_strlen]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strlen.c
[ft_strmapi]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strmapi.c
[ft_strncmp]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strncmp.c
[ft_strnstr]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strnstr.c
[ft_strrchr]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strrchr.c
[ft_strtrim]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strtrim.c
[ft_strrev]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strrev.c
[ft_substr]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_substr.c
[ft_strrncmp]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strrncmp.c
[ft_strtok]: https://github.com/Leined18/Libft/blob/main/srcs/str/ft_strtok.c

[ft_lstnew_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstnew_bonus.c
[ft_lstadd_front_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstadd_front_bonus.c
[ft_lstsize_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstsize_bonus.c
[ft_lstlast_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstlast_bonus.c
[ft_lstadd_back_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstadd_back_bonus.c
[ft_lstdelone_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstdelone_bonus.c
[ft_lstclear_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstclear_bonus.c
[ft_lstiter_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstiter_bonus.c
[ft_lstmap_bonus]: https://github.com/Leined18/Libft/blob/main/srcs/lst/ft_lstmap_bonus.c

[ft_printf]: https://github.com/Leined18/Libft/blob/main/srcs/printf/ft_printf.c
[ft_putbase_fd]: https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putbase_fd.c
[ft_putaddr]: https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putaddr.c
[ft_putchar]: https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putchar.c
[ft_puthexa]: https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_puthexa.c
[ft_putnbr]: https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putnbr.c
[ft_putstr]: https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putstr.c
[ft_putunsigned]: https://github.com/Leined18/Libft/blob/main/srcs/printf/put/ft_putunsigned.c
[get_next_line]: https://github.com/Leined18/Libft/blob/main/srcs/get/get_next_line.c
