
#include <stdio.h>
#include <string.h>
#include "../include/libft.h"

int main(void)
{
    int        s;
    char        r;
    
    s = -1;
    while (++s <= 13)
    {
        char    src[5] = "casa";
        char    dst[10] = "amor";
        if (s < 1)
        {
            printf("src: %s | dst: %s\n", src, dst);
            printf("r = strlcat(dst, src, size)\n");
        }
        r = strncat(dst, src, s);
        printf("size: %d | src: %s | dst: %s | return: %d\n", s, src, dst, r);
    }
    return 0;
}