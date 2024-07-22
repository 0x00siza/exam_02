#include <stdio.h>
#include <unistd.h>

char    *ft_strrev(char *str)
{
    char *s;
    int i = 0;
    int j  = 0;

    while(str[i] != '\0')
        i++;

    while(i-- >= 0 )
    {
        s[j++] = str[i];
    }
    s[j] = '\0';
    return (s);
}
