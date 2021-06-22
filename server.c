#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

 char *str;
 int i;

void my_handler(int signum);

int main()
{
    str = malloc(8);
    i = 1;
    printf("%d\n", getpid());
    fflush(stdout);
    if(signal(SIGUSR1, my_handler) == SIG_ERR)
        printf("can not catch SIGUSR1\n");
    if(signal(SIGUSR2, my_handler) == SIG_ERR)
        printf("can not catch SIGUSR2\n");    

    while(1)
    {
      pause();
    }
}
void my_handler(int signum)
{
    printf("%d",i);
    if (i == 8)
    {
        printf("%s\n", str);
        i = 0;
    }
    if (signum == SIGUSR1)
    {
     //   printf("1\n");
       // fflush(stdout);
        str[i++] = '1';
    }
    else
    {
        //printf("0\n");
        //fflush(stdout);
        str[i++] = '0';
    }
    printf("%s", str[i - 1]);
}
