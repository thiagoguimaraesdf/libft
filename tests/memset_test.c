#include <stdio.h>
#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n);

int main(void)
{
    char *ptr;

    ptr = malloc(5);
    printf("1: %s\n", ptr);
    ft_memset(ptr, 107, 5);
    printf("2: %s\n", ptr);
    free(ptr);
    return 0;
}