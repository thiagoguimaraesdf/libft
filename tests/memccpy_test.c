#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
    const char  src[] = "Hello";
    char        *ptr;

    ptr = malloc(4);
    ft_bzero(ptr, 4);
    printf("1: %s\n", ptr);
    ft_memccpy(ptr, src, 101, 6);
    printf("2: %s\n", ptr);
    free(ptr);
    return 0;
}