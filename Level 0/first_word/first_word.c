#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char	*argv)
{
	int	i = 0;
	char *str = argv[2];

	if (argc == 2)
	{
		while (str[i] == 32 || str[i] == 9)
			i++;
		while (str[i] != '\0' || str[i] != 32 || str[i] != 9)
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	ft_putchar("\n");
	return (0);
}
