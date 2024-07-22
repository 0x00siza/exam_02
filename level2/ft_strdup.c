#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char *ft_strdup(char *src)
{
    int i = 0;
    char *str;
    if(!src)
        return NULL;
    while(src[i] != '\0')
        i++;
    str = malloc((i + 1) * sizeof(char *));
    if(!str)
        return NULL;
    i = 0;
    while(src[i] != '\0')
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
