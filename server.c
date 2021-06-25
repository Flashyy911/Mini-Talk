#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
#include "libft/libft.h"

void	my_handler(int signum);
int		ft_8bits_binary_to_ASCII(int *num);

int	main(void)
{
	ft_putnbr(getpid());
	ft_putchar('\n');
	signal(SIGUSR1, my_handler);
	signal(SIGUSR2, my_handler);
	while (1)
		pause();
	return (0);
}

void	my_handler(int signum)
{
	static int	sum = 0;
	static int	multi = 128;

	if (signum == SIGUSR1)
		sum = sum + (1 * multi);
	multi /= 2;
	if (multi == 0)
	{
		ft_putchar((char)sum);
		multi = 128;
		sum = 0;
	}
}
