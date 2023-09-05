#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i = 0;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
				ft_putchar(122 - argv[1][i] + 97);
			else if (argv[1][i] >= 65 && argv[1][i] <= 90)
				ft_putchar(90 - argv[1][i] + 65);
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
