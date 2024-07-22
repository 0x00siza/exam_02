#include <unistd.h>
#include <stdio.h>

int ft_ato(char *str)
{
    int i = 0;
    int r = 0;
    int s = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        	i++;
    if (str[i] == '-' || str[i] == '+' )
    {
        if (str[i] == '-')
            s *= -1;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + (str[i] - '0');
        i++;
    }
    return (s * r);
}
int main(int ac, char **av)
{
   
    if(ac == 4 && !av[2][1])
    {
        if(av[2][0] == '*')
            printf("%d",ft_ato(av[1]) * ft_ato(av[3]));
        if(av[2][0] == '+')
            printf("%d",ft_ato(av[1]) + ft_ato(av[3]));
        if(av[2][0] == '-')
            printf("%d", ft_ato(av[1]) - ft_ato(av[3]));
        if(av[2][0] == '/')
            printf("%d",ft_ato(av[1]) / ft_ato(av[3]));
        if (argv[2][0] == '%')
			printf("%d", ft_ato(argv[1]) % ft_ato(argv[3]));
    }
    write(1,"\n",1);
}