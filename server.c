#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

 int *str;
 int i;

void my_handler(int signum);
int ft_8bits_binary_to_ASCII(int *num);

int main()
{
    str = malloc(9);
    i = 0;
    int tmp;
    char pid;
    
    str[8] = 0;

    pid = ft_atoi(getpid());
    ft_putstr(pid);


    signal(SIGUSR1, my_handler);
    signal(SIGUSR2, my_handler);

    while(1)
    {
      pause();
    }
    //free(str);
    //free(pid);
}
void my_handler(int signum)
{
    if (i == 8)
    {
        ft_putchar((char)ft_8bits_binary_to_ASCII(str));
        ft_putchar('\n');
        i = 0;
    }
    if (signum == SIGUSR1)
        str[i] = 1;
    else
        str[i] = 0;
    i++;
}

int ft_8bits_binary_to_ASCII(int *num)
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
}