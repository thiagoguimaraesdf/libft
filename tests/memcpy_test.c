#include <stdio.h>
#include <stdlib.h>

void *ft_memcpy(void *restrict dest, const void *restrict src, size_t n);

int main(void)
{
    const char  src[] = "Hello";
    char        *ptr;

    ptr = malloc(4);
    printf("1: %s\n", ptr);
    ft_memcpy(ptr, src, 6);
    printf("2: %s\n", ptr);
    free(ptr);
    return 0;
}