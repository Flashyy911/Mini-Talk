#include <stdio.h>
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

char *ft_string_to_binary(char *str);
void my_handler(int signum);
int main(int argc, char **argv)
{
	int pid;
	char *binary_buffer;
	int i;
	
	pid = ft_atoi(argv[1]);
	binary_buffer = ft_string_to_binary(argv[2]);
	i = 0;
	while(binary_buffer[i])
	{
		if (binary_buffer[i] == '1')
			kill(pid,SIGUSR1);
		else
			kill(pid,SIGUSR2);
		usleep(75);
		printf("%c",binary_buffer[i]);
		i++;
	}
}

char *ft_string_to_binary(char *str)
{
	int i;
	char *binary_buffer;

	binary_buffer = malloc(8*ft_strlen(str));
	for(i=0;i<8*ft_strlen(str);i++)
		binary_buffer[i] = (0 != (str[i/8] & 1 << (~i&7))) + '0';

	return (binary_buffer);
}
