#include <stdio.h>
#include <stdlib.h>
#include "../include/libft.h"

int main(void)
{
    const char  src[] = "Hello";
    char        *ptr;

    ptr = malloc(4);
    ft_bzero(ptr, 5);
    printf("1: %s\n", ptr);
    ft_memmove(ptr, src, 4);
    printf("2: %s\n", ptr);
    free(ptr);
    return 0;
}