#include <unistd.h>

int print_num(int number)
{
    char s[10] = "0123456789";
    if(number > 9)
        print_num(number / 10);
    write(1,&s[number % 10],1);
}
int main()
{
    int i = 1;
    while(i <= 100)
    {
        if((i % 3 == 0) && (i % 5 == 0))
            write(1,"fizzbuzz",8);
        else if(i % 3 == 0)
            write(1,"fizz",4);
        else if(i % 5 == 0)
            write(1,"buzz",4);
       
        else
            print_num(i);
        write(1,"\n",1);
        i++;
    }
}