#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
	j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
		j = j + 1;
		}
		ft_putchar('\n');
	i = i +1;
	}
	return (0);
}
