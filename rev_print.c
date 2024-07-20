#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main(int ac, char **av)
{
    
    if(ac == 2)
    {
        int j = ft_strlen(av[1]) - 1;
        
        while(j >= 0)
        {
            write(1,&av[1][j],1);
            j--;
        }
    }
    write(1,"\n",1);
    return 0;
}