#include <stdio.h>

int		max_c(int* tab, unsigned int len)
{
    int max;
    int i = 0 ;

    if(len == 0)
        return 0;
     max = tab[i];
    while(i < len - 1)
    {
       
        if(tab[i +1 ] > max)
            max = tab[i + 1];
        i++;
    }
    return max;
}
int main()
{
    int tab[5] = {1,5,9,3,8};
    int len = 5;
    printf("%d",max_c(tab,len));
}