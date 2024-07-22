#include <unistd.h>
#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    unsigned char *src ;
    unsigned char *dst;

    src = (unsigned char *)s1;
    dst = (unsigned char *)s2;

    while((dst[i] != '\0' && src[i] != '\0') &&  dst[i] == src[i] )
    {
        i++;
    }
    return (dst[i] - src[i]);

}
