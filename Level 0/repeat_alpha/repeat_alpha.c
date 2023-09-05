#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	int	pos;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			pos = 1;
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
				pos = argv[1][i] - 97 + 1;
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				pos = argv[1][i] - 65 + 1;
			while (pos > 0)
			{
				ft_putchar(argv[1][i]);
				pos--;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
