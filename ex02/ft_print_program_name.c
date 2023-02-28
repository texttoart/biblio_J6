#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putstr("Nom du programme : ");
		ft_putstr(argv[0]);
		ft_putchar('\n');
	}
	return (0);
}
