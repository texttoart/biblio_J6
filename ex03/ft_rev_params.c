#include "libft.h"

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	while (i > 0)
	{
	j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j = j + 1;
		}
		ft_putchar('\n');
	i = i -1;
	}
	return (0);
}
