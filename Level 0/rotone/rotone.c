#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	rot13;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 89) || (argv[1][i] >= 97 && argv[1][i] <= 121))
				ft_putchar(argv[1][i] + 1);
			else if (argv[1][i] == 90 || argv[1][i] == 122)
				ft_putchar(argv[1][i] - 25);
			else
				ft_putchar(argv[1][i]);
		i++;
		}

	}
	ft_putchar('\n');
	return (0);
}

