#include <stdio.h>
#include <string.h>

#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *reject)
{
    size_t j = 0;
    size_t i = 0;
    size_t count = 0;
   
    while( s[i] != '\0')
    {
        while(reject[j] != '\0')
        {
            if(s[i] != reject[j])
               return(i);
            else
                count++;
                return (count);
            j++;
        }
        i++;
    }
    return(count);
}
int main()
{
    char s[] = "aesrine";
    char d[] = "aer";
    printf("%d",ft_strspn(s,d));
}