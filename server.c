#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

 int multi;
 int sum;


void my_handler(int signum);
int ft_8bits_binary_to_ASCII(int *num);

int main()
{
    multi = 128;
    sum = 0;
    ft_putnbr(getpid());
    ft_putchar('\n');
    signal(SIGUSR1, my_handler);
    signal(SIGUSR2, my_handler);
    while(1)
      pause();
}

void my_handler(int signum)
{
    if (signum == SIGUSR1)
       sum = sum + (1 * multi);        
    multi /=2;
    if (multi == 0)
    {
        ft_putchar((char)sum);
        multi = 128;
        sum = 0;
    }
}

/*int ft_8bits_binary_to_ASCII(int *num)
{
    int sum;
    int multiplicator;
    int j;

    j = 0;
    multiplicator = 128;
    sum = 0;
    while (j != 8)
    {
        sum = sum + (num[j] * multiplicator);
        multiplicator /=2;
        j++;
    }
    return((sum));
}*/