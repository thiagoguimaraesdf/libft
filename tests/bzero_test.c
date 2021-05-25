#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

int main(void)
{
    char *ptr;

    ptr = malloc(5);
    printf("1: %s\n", ptr);
    ft_bzero(ptr, 5);
    printf("2: %s\n", ptr);
    free(ptr);
    return 0;
}